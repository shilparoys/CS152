/* Shilpa Chirackel 861060176
   Rachel Law 861071722 
*/
%{
 #include <stdio.h>
 #include <stdlib.h>
 #include <vector>
 #include <string>
 #include <sstream>

 using namespace std;

 void yyerror(const char *msg);
 extern int yylex(void);
 extern int currLine;
 extern int currPos;
 extern FILE * yyin;

 //struct for the symbolTable
 struct symbolTableEntry{
    string name;
    int a_size;
    int value;
    symbolTableEntry(): name(), a_size(0), value(0) {}
};

 //user defined functions
 bool isVariableDeclared(string input);

 //user defined variables
 string programName;
 vector<string> errorList;
 vector <string> continueLabel;
 vector <string> doloop_l;
 vector <string> t_vars;
 vector <string> p_vars;
 vector <string> l_labels;
 vector <string> opelse;
 vector <string> t;
 vector <string>  v;
 vector <bool> elsep
 vector<symbolTableEntry> symbolTable;
 string doloop_c;
 ostringstream output;
 bool valid = true;
 bool arrayValid = true;
 bool readBool = false;
 bool writeBool = false;
 string arrayName;
 int l_size = 0;
%}

%union{
  char* identToken;
  int numToken;
}

%error-verbose
%start program_start
%token PROGRAM BEGIN_PROGRAM END_PROGRAM INTEGER ARRAY OF IF THEN ELSE
%token ENDIF ELSEIF WHILE DO BEGINLOOP ENDLOOP BREAK CONTINUE END
%token EXIT READ WRITE NOT TRUE FALSE SEMICOLON COLON COMMA QUESTION
%token L_BRACKET R_BRACKET ASSIGN
%token <numToken> NUMBER
%token <identToken> IDENT
%left OR AND SUB ADD MULT DIV MOD EQ NEQ LT GT LTE GTE L_PAREN R_PAREN
%nonassoc IF_PREC ELSE_PREC

%type <identToken> identifier
%type <identToken> array
%type <identToken> number
%type <identToken> Var
%type <identToken> comp

program_start:	
             program identifier {programName = $2;} semicolon block endprogram 
             {}
            ; 

//nonterminals
block:
            declarations beginprogram {output << ": START\n";} statements 
            {}
            ;
 
declarations:
            declaration semicolon declarations 
            {}
            |
			{} 
            ;

declaration:
            identifier identMore colon declaration2 integer 
            {
                arrayName = $1;
                valid = isVariableDeclared($1); 
                symbolTableEntry sym;
                sym.value = 0;
                sym.name = $1;
                symbolTable.push_back(sym);

                if(valid){
                    stringstream err;
                    err << "Error line " << currLine << ": symbol \"" << $1 << "\" << is multiply-defined\n";
                    errorList.push_back(err.str());
                }
            }
            ;

declaration2:
			array left_paren number right_paren of
			{
                //semantic checking of array size
                if($3 <= 0){
                    arrayValid = false;
                    stringstream err;
                    err <<  "Error line " << currLine << ": Variable \"" << arrayName << "\" has an invlaid array size\n";
                    errorList.push_back(err.str());
                }

                symbolTableEntry sym;
                sym.value = 1;
                sym.a_size = atoi($3);
                sym.name = arrayName;
                symbolTable.push_back(sym);
               
                if(arrayValid){
                    stringstream err;
                    err <<  "Error line " << currLine << ": symbol \"" << arrayName << "\" << is multiply-defined\n";
                    errorList.push_back(err.str());
                }
            }
			|
			{}
			;


identMore:
            comma identifier identMore 
            {
                valid = isVariableDeclared($2);
                if(!valid){
                    symbolTableEntry sym;
                    sym.value = 0;
                    sym.name = $2;
                    symbolTable.push_back(sym);
                }
                else{
                    stringstream err;
                    err << "Error line " << currLine << ": symbol \"" << $2 << "\" is multiply-defined\n";
                    errorList.push_back(err.str());
                }
            }
            |
			{}
            ;

statements:
            statement semicolon statements 
            {}
            |
            {}
            ;

statement:
            continue 
            { output << ":= " << continueLabel[continueLabel.size()-1] << "\n";}
            |write Var Vars 
            {writeBool = false;}
            |read Var Vars 
            {readBool = false;}
            |do beginloop statement semicolon statements {output << ": " << continueLabel[continueLabel.size()-1] << endl; continueLabel.pop_back();}endloop while bool_exp 
            { stringstream temp;
              temp << "p"<< p_vars.size();
              p_vars.push_back(temp.str());
              output << "== " << temp.str() << ", " << doloop_c << ", 0" << endl;
              output <<"?:= " << doloop_l[doloop_l.size()-1] << ", "<<p_vars[p_vars.size()-1 ]<< endl;
              output << ": " << l_labels[l_labels.size() -1] <<endl;
              l_labels.pop_back();
              doloop_l.pop_back();
            }
            |while bool_exp beginloop statement semicolon statements {output << ": " << continueLabel[continueLabel.size()-1] << endl; continueLabel.pop_back();} endloop 
            {}
            |if bool_exp then statement semicolon statements {stringstream temp; temp << "L" << l_size; l_size++; l_labels.push_back(temp.str()); output << ":= " << temp.str() << endl;}statement1 endif 
            {}
            |Var assign expression {
                string var = $1; 
                int i = var.find(" ",0);
                if(i != string::npos){//array on lhs
                    string a, b, c;
                    a = var.substr(0,i);
                    b = var.substr(i+1);
                    c = $3;
                    if(!check_if_temp(a) )
                        a.insert(0,"_");
                    if(!check_if_temp(b) )
                        b.insert(0,"_");
                    if(!check_if_temp(c) )
                        c.insert(0,"_");

                    //check if c is an array 
                    int i2 = c.find(" ",0);
                    if(i2 != string::npos){
                        string x,y;
                        x = c.substr(0,i2);
                        y = c.substr(i2+1);
                        if(!check_if_temp(y) )
                        y.insert(0,"_");

                        stringstream temp;
                        temp << "t" <<t_vars.size();
                        t_vars.push_back(temp.str() );
                        output << "=[] " << temp.str() << ", " << x << ", " << y <<endl;
                        output << "[]= " << a << ", "<< b<< ", "<< temp.str() << endl;
                    }
                    else
                        output << "[]= " << a << ", "<< b<< ", "<< c << endl;
                }
                else{
                    string exp = $3;    
                    if(!check_if_temp(var) )
                        var.insert(0,"_");
                    
                    int i = exp.find(" ",0);
                    if(i != string::npos){//array on rhs 
                        string a, b;
                        a = exp.substr(0,i);
                        b = exp.substr(i+1);

                        if(!check_if_temp(a) )
                            a.insert(0,"_");
                        if(!check_if_temp(b) )
                            b.insert(0,"_");

                        output << "=[] " << var << ", " << a << ", " << b <<endl;
                    }
                    else{
                        if(!check_if_temp(exp) )
                            exp.insert(0,"_");
                        output << "= " << var << ", "<< exp << endl;
                    }
                }

            ;

statement1:
			else statement semicolon statements
			{}
			|
			{}
			;

Vars:
            comma Var Vars
            {}
            |
            {}
            ;

Var:
            identifier var2 
            {}
			;

var2:
			left_paren expression right_paren
			{}
			|
			{}
			;

bool_exp:
            relation_and_exp relation_or 
            {}
            ;

relation_and_exp:
            relation_exp relation_and 
            {}
            ;

relation_or:
            or relation_and_exp relation_or 
            {}
            | {}
            ;

relation_and:
            and relation_exp relation_and 
            {}
            | {}
            ;


relation_exp:
			not relation_exp2
			{}
			|relation_exp2
			{}
			;


relation_exp2:
            expression comp expression 
            {}
            | true 
            {}
            | false 
            {}
            | left_paren bool_exp right_paren 
            {}
            ;


expression:
            multplicative_exp moreMultExp 
            {}
            ;


multplicative_exp:
            term term1 
            {}
            ;

term:
			minus term2
			{}
			| term2
			{}
			;

term1:
            mult term term1 
            {}
            |div term term1
            {}
            |mod term term1
            {}
            |
			{}
            ;

term2:
            Var 
            {}
            | number
             {}
            | left_paren expression right_paren 
            {}
            ;
		

moreMultExp:
            plus multplicative_exp moreMultExp
            {}
            | minus multplicative_exp moreMultExp
            {}
            | {};
            ;




//terminals
program:
            PROGRAM {}
            ;
identifier:
            IDENT {}
            ;
semicolon:
            SEMICOLON {}
            ;

beginprogram:
            BEGIN_PROGRAM {}
            ;

endprogram:
            END_PROGRAM {}
            ;

colon:
            COLON {}
            ;
array:      
            ARRAY {}
            ;

left_paren:
            L_PAREN {}
            ;
number:
            NUMBER {}
            ;
right_paren:
            R_PAREN {}
            ;
of:
            OF {}
            ;

integer:
            INTEGER {}
            ;
comma:
            COMMA {}
            ;

continue:
            CONTINUE {}
            ;
write:
            WRITE {writeBool = true;}
            ;

read:
            READ {readBool = true;}
            ;   
do:
            DO {}
            ;

beginloop:
            BEGINLOOP {
                stringstream temp;
                temp << "L" << l_size;
                l_size++;   
                doloop_l.push_back(temp.str());
                output << ": " << doloop_l[doloop_l.size()-1] << endl;

                stringstream cont;
                cont << "L" << l_size;
                l_size++;
                continueLabel.push_back(cont.str());
            }
            ;   

endloop:
            ENDLOOP {
                output <<":= " << l_labels[l_labels.size() -2] <<endl;
                output << ": " << l_labels[l_labels.size() -1] <<endl; 

                l_labels.pop_back();
                l_labels.pop_back();
            }
            ;

while:
            WHILE {
                stringstream temp;
                temp << "L" << l_size;
                l_size++;
                l_labels.push_back(temp.str());
                output<<": " << l_labels[l_labels.size()-1] <<endl;

                 stringstream cont;
                 cont <<"L"<<l_size;
                 l_size++;
                 continueLabel.push_back(cont.str() );
            }
            ;
if: 
            IF {}
            ;

then:
            THEN {}
            ;

else:
            ELSE {}
            ;
endif:
            ENDIF {
            if (elsep[elsep.size()-1] == false){
                    output <<": " << l_labels[l_labels.size() -2] <<endl;
                }
                output << ": " << l_labels[l_labels.size() -1] <<endl; 
                
                l_labels.pop_back();
                l_labels.pop_back();

                opelse.pop_back();
                elsep.pop_back(); 
            }

            ;
assign:
            ASSIGN {}
            ;

and:
            AND {}
            ;

or:
            OR {}
            ;

true:
            TRUE {}
            ;

false:
            FALSE {}
            ;

not:
            NOT {}
            ;

comp:
            EQ    { $$ = "==";}
            | NEQ { $$ = "!=";}
            | LT  { $$ = "<";}
            | GT  { $$ = ">";}
            | LTE { $$ = "<=";}
            | GTE { $$ =">=";}
            ;


mult:
            MULT {}
            ;

div:
            DIV {}
            ;

mod:
            MOD {}
            ;

plus:
            ADD {}
            ;

minus:
            SUB {}
            ;


%%


bool isVariableDeclared(string input){
    if(input == programName){
        return true;
    }
    for(int i = 0; i < symbolTable.size(); i++){
        if(symbolTable.at(i).name == input){
            return true;
        }
    }
    return false;
}

int main(int argc, char **argv) {
   if (argc > 1) {
      yyin = fopen(argv[1], "r");
      if (yyin == NULL){
         printf("syntax: %s filename\n", argv[0]);
      }//end if
   }//end if
   yyparse(); // Calls yylex() for tokens.
   
   //Checking for semantic errors
   //If found, output and then exit
   if(errorList.empty()){
        for(int i = 0; i < errorList.size(); i++){
            printf("%s", errorList[i].c_str());
        }
        return 0;
   }
   else{
   //compilation is a success so can produce mil file
        //for(int i = 0; i < symbolTable.size(); i++){
       //     if(symbolTable[i].type 
        programName = programName + ".mil";
   }
   return 0;
}

void yyerror(const char *msg) {
   printf("** Line %d, position %d: %s\n", currLine, currPos, msg);
}

