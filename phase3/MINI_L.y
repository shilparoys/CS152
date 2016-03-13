/* Shilpa Chirackel 861060176
   Rachel Law 861071722 
*/
%{
 #include <stdio.h>
 #include <stdlib.h>
 #include <iostream>
 #include <vector>
 #include <string>
 #include <sstream>
 #include <fstream>
 void yyerror(const char *msg);
 extern int yylex(void);
 extern int currLine;
 extern int currPos;
 extern FILE * yyin;
 using namespace std;

 //symbol Node for symbols
 struct symbolNode{
    int size;
    int type;
    string name;
 };

 //user defined variables and functions
 vector <string> temps;
 vector <string> predicates;
 vector <string> loop;
 vector<symbolNode> symbolTable;
 vector <string> errorList;
 int counter = 0;
 string fileName;
 stringstream output;
 stringstream err;
 stringstream fileOutput;
 stringstream t;
 bool arrayValid = true; //false - invalid array
 bool definedValid = false;//true - it is already defined
 bool isDefinedAlready(string str);
 bool shouldIPutUnderscore(string str);
 int getType(string str);
 int whatTerm = 0;
 bool inTrue = false;
 bool inFalse = false;
 bool inNot = false;
 bool isRead = false;
 string temp = "";
 string temp2 = "";
 bool isWrite = false;
 ofstream myFile;

%}

%union{
  char* identToken;
  int  numToken;
}

%error-verbose
%start program_start
%token PROGRAM BEGIN_PROGRAM END_PROGRAM INTEGER ARRAY OF IF THEN ELSE
%token ENDIF ELSEIF WHILE DO BEGINLOOP ENDLOOP BREAK CONTINUE END
%token EXIT READ WRITE NOT TRUE FALSE SEMICOLON COLON COMMA QUESTION
%token L_BRACKET R_BRACKET ASSIGN
%token <identToken> NUMBER
%token <identToken> IDENT
%left OR AND SUB ADD MULT DIV MOD EQ NEQ LT GT LTE GTE L_PAREN R_PAREN
%nonassoc IF_PREC ELSE_PREC

%type <identToken> Var
%type <identToken> expression
%type <identToken> comp
%type <identToken> term
%type <identToken> term1
%type <identToken> moreMultExp
%type <identToken> multplicative_exp
%type <identToken> relation_exp2
%type <identToken> relation_and_exp
%type <identToken> relation_or
%type <identToken> relation_and
%type <identToken> Vars
%type <identToken> relation_exp
%type <identToken> statement
%type <identToken> bool_exp
%% 
program_start:	
             PROGRAM IDENT {fileName = $2;} SEMICOLON block END_PROGRAM 
             {}
             ; 

block:
            declarations BEGIN_PROGRAM{output << ": START\n";} statements
            {}
            ;

declarations:
            declaration SEMICOLON declarations 
            {}
            |
			{} 
            ;

declaration:
            IDENT identMore COLON ARRAY L_PAREN NUMBER R_PAREN OF INTEGER 
            {
                //semantic checking of array size
                if($6 <= 0){
                    arrayValid = false;
                    err << "Error line " << currLine << ": invalid array size\n";
                    errorList.push_back(err.str());
                }
                //semantic check if it is already defined
                definedValid = isDefinedAlready($1);
                if(definedValid){
                    err << "Error line " << currLine << ": sybmol \"" << $1 << "\"" << "is multiply-defined.\n";
                    errorList.push_back(err.str());
                }
                if(arrayValid && !definedValid){
                    symbolNode temp;
                    temp.size  = atoi($6);//array size
                    temp.type  = 1; //array
                    temp.name  = $1;
                    symbolTable.push_back(temp);

                }
            }
            |IDENT identMore COLON INTEGER
             {
                //semantic check if it is already defined
                definedValid = isDefinedAlready($1);
                if(definedValid){
                    err << "Error line " << currLine << ": sybmol \"" << $1 << "\"" << "is multiply-defined.\n";
                    errorList.push_back(err.str());
                }
                if(!definedValid){
                    symbolNode temp;
                    temp.size = -1;
                    temp.type = 2;//integer
                    temp.name = $1;
                    symbolTable.push_back(temp);
                } 
            }
            ;

identMore:
            COMMA IDENT identMore 
            {
                //semantic check if it is already defined
                definedValid = isDefinedAlready($2);
                if(definedValid){
                    err << "Error line " << currLine << ": sybmol \"" << $2 << "\"" << "is multiply-defined.\n";
                    errorList.push_back(err.str());
                }
                if(!definedValid){
                    symbolNode temp;
                    temp.size = -1;
                    temp.type = 2;
                    temp.name = $2;
                    symbolTable.push_back(temp);
                }

            }
            |
			{}
            ;

statements:
            statement SEMICOLON  
            {}
            |statements statement SEMICOLON
            {}
            ;

statement:
            CONTINUE 
            {}
            |WRITE {isWrite = true;} Vars{isWrite = false;} 
            {}
            |READ {isRead = true;} Vars {isRead = false;}
            {}
            |DO BEGINLOOP {
                t.str("");
                t << "L" << loop.size();
                loop.push_back(t.str());
                output << ": " << t.str() << endl;
                t.str("");
            }                
            statement1  ENDLOOP WHILE bool_exp 
            {}
            |WHILE bool_exp BEGINLOOP statement1 ENDLOOP 
            {}
            |IF bool_exp THEN statement1 optionelse ENDIF
            {}
            |Var ASSIGN  expression
            {}
            ;

statement1:
			statement SEMICOLON statement1
			{}
			|
			{}
			;

Vars:
            Vars COMMA Var
            {
                string temp = $3;
                if(isRead){
                    int type = getType(temp);
                    if(type == 2){
                        output << ".< _ " << temp << endl;
                    }
                    else{
                        size_t found = temp.find(" ");
                        if(shouldIPutUnderscore(temp.substr(found + 1)))
                            temp.substr(found+1).insert(0, "_");
                            output << ".[]< _ " << temp.substr(0,found) << ", " << temp.substr(found+1) << endl;
                    }
                }
                if(isWrite){
                    int type = getType(temp);
                    if(type == 1)
                        output << ".> _ " << temp;
                    else{
                        size_t found = temp.find(" ");
                        if(shouldIPutUnderscore(temp.substr(found + 1)))
                            temp.substr(found+1).insert(0, "_");
                        output << ".[]> _" << temp.substr(0,found) << ", " << temp.substr(found+1) << endl;
                    }
                }
            }
            |Var
            { string temp = $1;
                if(isRead){
                    int type = getType(temp);
                    if(type == 2){
                        output << ".< _ " << temp << endl;
                    }
                    else{
                        size_t found = temp.find(" ");
                        if(shouldIPutUnderscore(temp.substr(found + 1)))
                            temp.substr(found+1).insert(0, "_");
                            output << ".[]< _ " << temp.substr(0,found) << ", " << temp.substr(found+1) << endl;
                    }
                }
                if(isWrite){
                    int type = getType(temp);
                    if(type == 1)
                        output << ".> _ " << temp;
                    else{
                        size_t found = temp.find(" ");
                        if(shouldIPutUnderscore(temp.substr(found + 1)))
                            temp.substr(found+1).insert(0, "_");
                        output << ".[]> _" << temp.substr(0,found) << ", " << temp.substr(found+1) << endl;
                    }
                }
            }
            ;

Var:
            IDENT
            {
                //semantic checking = has it been declared 
                definedValid = isDefinedAlready($1);
                 if(!definedValid){
                    err << "Error line " << currLine << ": used variable \"" << $1 << "\"" << "was not previously declared.\n";
                    errorList.push_back(err.str());
                }
                int type = getType($1);
                if(type == 2){
                    $$ = $1;
                }
                else if (type == 1){
                    err << "Error line " << currLine << ": used array variable \"" << $1 << "\"" << "is missing a specified index.\n";
                    errorList.push_back(err.str());
                }
            }
		    |
			IDENT L_PAREN expression R_PAREN
			{
                //semantic checking = has it been declared
                definedValid = isDefinedAlready($1);
                if(!definedValid){
                    err << "Error line " << currLine << ": used variable \"" << $1 << "\"" << "was not previously declared.\n";
                    errorList.push_back(err.str());
                }
                int type = getType($1);
                if(type == 1){
                    //doing fancy stuff for me to realize that it is an array when this gets propogated up
                    string temp = "";
                    temp += $1;
                    temp += "@";
                    temp += $3;
                    strcpy($$, temp.c_str());
                }
                else if (type == 2){
                    err << "Error line " << currLine << ": used integer variable \"" << $1 << "\"" << "is used as an array.\n";
                    errorList.push_back(err.str());
               } 
                
            }
			;

optionelse:
            ELSE statement1 
            {}
            |
            {}
            ;

bool_exp:
            relation_and_exp relation_or 
            {
                if($2 == NULL){
                    $$ = $1;
                }
                else{
                    t.str("");
                    t << "p" << predicates.size();
                    predicates.push_back(t.str());
                    temp.clear();
                    temp2.clear();
                    temp = $1;
                    temp2 = $2;
                    bool a = shouldIPutUnderscore(temp);
                    bool b = shouldIPutUnderscore(temp2);
                    if(a)
                        temp.insert(0, "_");
                    if(b)
                        temp2.insert(0, "_");
                    output << "|| " << t.str() << ", " << temp << ", " << temp2 << endl;
                    strcpy($$, t.str().c_str());
                }
            }
            ;

relation_and_exp:
            relation_exp relation_and 
            {
                if($2 == NULL){
                    $$ = $1;
                }
                else{
                    t.str("");
                    t << "p" << predicates.size();
                    predicates.push_back(t.str());
                    temp.clear();
                    temp2.clear();
                    temp = $1;
                    temp2 = $2;
                    bool a = shouldIPutUnderscore(temp);
                    bool b = shouldIPutUnderscore(temp2);
                    if(a)
                        temp.insert(0, "_");
                    if(b)
                        temp2.insert(0, "_");
                    output << "&& " << t.str() << ", " << temp << ", " << temp2 << endl;
                    strcpy($$, t.str().c_str());
                }
            }
            ;

relation_or:
            OR relation_and_exp relation_or 
            {$$ = $2;}
            |{$$ = NULL;}
            ;

relation_and:
            AND relation_exp relation_and 
            { $$ = $2;}
            |{ $$ = NULL;}
            ;


relation_exp:
			NOT relation_exp2
			{
                inNot = true;
            }
			|relation_exp2
			{}
			;


relation_exp2:
            expression comp expression 
            {
               t.str("");
               t << "p" << predicates.size();
               predicates.push_back(t.str());
               temp.clear();
               temp2.clear();
               temp = $1;
               temp2 = $2;
               bool a = shouldIPutUnderscore(temp);
               bool b = shouldIPutUnderscore(temp2);
               if(a)
                    temp.insert(0, "_");
               if(b)
                    temp2.insert(0, "_");
               size_t found = temp.find("@");
               if(found != string::npos){
                    t.str("");
                    t << "p" << temps.size();
                    temps.push_back(t.str());
                    string c, d;
                    if(shouldIPutUnderscore(temp.substr(0, found)))
                        c = (temp.substr(0,found)).insert(0, "_");
                    if(shouldIPutUnderscore(temp.substr(found +1)))
                        d = (temp.substr(found+1)).insert(0, "_");
                    output << "=[] " << temp2 << ", " << c << "," << d << endl;
               }
               output << $2 << " " <<  t.str() << ", " << temp << ", " << temp2 << endl;
            }
            | TRUE
            {
                if(inNot){
                    t.str("");
                    t << "p" << predicates.size();
                    predicates.push_back(t.str());
                    output << "= " << t.str() << ", 0 " << endl;
                    strcpy($$, t.str().c_str());
                    inNot = false;

                }
                t.str("");
                t << "p" << predicates.size();
                predicates.push_back(t.str());
                output << "= " << t.str() << ", 1 " << endl;
                strcpy($$, t.str().c_str());
            }
            | FALSE 
            {
              if(inNot){
                t.str("");
                t << "p" << predicates.size();
                predicates.push_back(t.str());
                output << "= " << t.str() << ", 1 " << endl;
                strcpy($$, t.str().c_str());
                inNot = false;
              }
              t.str("");
              t << "p" << predicates.size();
              predicates.push_back(t.str());
              output << "= " << t.str() << ", 0 " << endl;
              strcpy($$, t.str().c_str());
            }
            |L_PAREN bool_exp R_PAREN 
            {}
            ;


expression:
            multplicative_exp moreMultExp 
            {
            
                if($2 == NULL){
                    $$ = $1;
                }
                else{
                    temp.clear();
                    temp2.clear();
                    temp = $1;
                    temp2 = $2;
                    bool a = shouldIPutUnderscore(temp);
                    bool b = shouldIPutUnderscore(temp2);
                    if(a)
                        temp.insert(0, "_");
                    if(b)
                        temp2.insert(0, "_");
                    t.str("");
                    t << "t" << temps.size();
                    temps.push_back(t.str());
                    if(whatTerm == 1){
                        output << "+ " << t.str() << ", " << temp << ", " << temp2 << endl;
                    }
                    if(whatTerm == 2){
                        output << "- " << t.str() << ", " << temp << ", " << temp2 << endl;
                    }
                    strcpy($$, t.str().c_str());
                }
                whatTerm = 0;
            }
            ;


multplicative_exp:
            term term1 
            { 
              //term1 returned an empty production
              if($2 == NULL){
                $$ = $1;
              }
              else{
                temp.clear();
                temp2.clear();
                temp =  $1;
                temp2 = $2;
                
                //figures out if I should put the  _
                bool a = shouldIPutUnderscore(temp);
                bool b = shouldIPutUnderscore(temp2);
                //inserts the _ if needed
                if(a)
                    temp.insert(0, "_");
                if(b)
                    temp2.insert(0, "_");
                //clears the buffer
                t.str("");
                t << "t" << temps.size();
                temps.push_back(t.str());
                //print out based on what mult
                if(whatTerm == 3){
                    output << "* " << t.str() << ", " << temp << ", " << temp2 << endl;
                }
                if(whatTerm == 4){
                    output << "/ " << t.str() << ", " << temp << ", " << temp2 << endl;
                }
                if(whatTerm == 5){
                    output << "% " << t.str() << ", " << temp << ", " << temp2 << endl;
                }
                strcpy($$, t.str().c_str());
                whatTerm = 0;
              }


            }
            ;

term:
			SUB Var
			{
                output << "* _" << $2 << ", " << "_ " << $2 << ", -1" << endl;
                $$ = $2;
            }
            | SUB NUMBER
            {}
            | SUB L_PAREN expression R_PAREN
            {}
			| Var
			{ $$ = $1;}
            | NUMBER
            { $$ = $1;}
            | L_PAREN expression R_PAREN
            { $$ = $2;}
			;

//whatTerm 3 means it is mult, 4 means it is div, and 5 is mod
term1:
            term1 MULT term  
            { $$ = $3; whatTerm = 3;}
            |term1 DIV term 
            { $$ = $3; whatTerm = 4;}
            |term1 MOD term 
            { $$ = $3; whatTerm = 5;}
            |
			{ $$ = NULL;}
            ;		

moreMultExp:
            ADD multplicative_exp moreMultExp
            {
                $$ = $2;
                //1 indicates that it is addition
                whatTerm = 1;
            }
            |SUB  multplicative_exp moreMultExp
            {
                 $$ = $2;
                 //2 indicates that it is subtraction
                 whatTerm = 2;
            }
            |
            {
                $$ = NULL;
            };
            ;

comp:
            EQ    {$$ = "==";}
            | NEQ {$$ = "!=";}
            | LT  {$$ = "<";}
            | GT  {$$ = ">";}
            | LTE {$$ = "<=";}
            | GTE {$$ = ">=";}
            ;

%%

int main(int argc, char **argv) {
    
   yyparse(); // Calls yylex() for tokens.
   //prints out the erros
   if(!errorList.empty()){
        for(int i = 0; i < errorList.size(); i++){
                cout << errorList.at(i);
        }
        exit(1);
    }
    if (argc > 1) {
      yyin = fopen(argv[1], "r");
      if (yyin == NULL){
         printf("syntax: %s filename\n", argv[0]);
      }//end if
   }//end if

   //create the mil file with given program name
   fileName = fileName + ".mil";
   myFile.open(fileName.c_str());
   
   for(int i = 0; i < symbolTable.size(); i++){
       //print out all the integers  
       if(symbolTable.at(i).type == 2){
            fileOutput << ". _" << symbolTable.at(i).name << endl;
        }
        //print out all the arrays
        if(symbolTable.at(i).type == 1){
            fileOutput << ".[] _" << symbolTable.at(i).name << ", " << symbolTable.at(i).size << endl;
        }
   }
   //print out all the temps
   for(int i = 0; i < temps.size(); i++){
            fileOutput << ". " << temps.at(i) << endl;
    }
   //print out all the predicates
   for(int i = 0; i < predicates.size(); i++){
            fileOutput << ". " << predicates.at(i) << endl;
    }
   //print out the mil instructions
   fileOutput << output.str();
   myFile << fileOutput.str();
   myFile.close();
   return 0;

}

void yyerror(const char *msg) {
   printf("** Line %d, position %d: %s\n", currLine, currPos, msg);
}

bool isDefinedAlready(string str){
    for(int i = 0; i < symbolTable.size(); i++){
        if(str.compare(symbolTable.at(i).name) == 0){
            return true;
        }
    }
    return false;
}

int getType(string str){
    for(int i = 0; i < symbolTable.size(); i++){
        if(str.compare(symbolTable.at(i).name) == 0){
            return symbolTable.at(i).type;
        }
    }
    return -1;
}

bool shouldIPutUnderscore (string temp){

  if((temp.at(0) == 't' && isdigit(temp.at(1)) || (temp.at(0) == 'p' && isdigit(temp.at(1)) ) || isdigit(temp.at(0) || temp.at(0) == '_'))) 
        return false;
  else
        return true;
}

        
