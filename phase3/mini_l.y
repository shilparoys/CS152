%{

  /* 
    Brittany Seto 861058099
    Justin Jan    861070174
  */

  #include <stdio.h>
  #include <stdlib.h>
  #include <iostream>
  #include <fstream>
  #include <sstream>
  #include <vector>
  #include <string>

  using namespace std;

  void yyerror(const char *msg);
  extern int yylex();
  extern char* yytext;
  extern int currLine;
  extern int currPos;
  extern FILE * yyin;
  extern int yyleng;

  struct symNode{
    int val;
    int size;
    int type; // 1 = int, 2 = array
    string name;

  };

  vector<symNode> symbol_table;

  string program_name;

  stringstream output;
  stringstream error;
  stringstream toFile;

  bool inSymTable(string s);

%}

%union{
  char* idToken;
  int numToken;
}


%error-verbose
%start program_start
%token PROGRAM BEGIN_PROGRAM END_PROGRAM INTEGER ARRAY OF IF THEN
%token ENDIF ELSE WHILE DO BEGINLOOP ENDLOOP CONTINUE READ WRITE
%token NOT TRUE FALSE SEMICOLON COLON COMMA ASSIGN L_PAREN R_PAREN
%token <idToken> IDENT
%token <numToken> NUMBER
%left AND OR SUB ADD MULT DIV MOD EQ NEQ LT GT LTE GTE


%%

program_start:
          PROGRAM IDENT {program_name = $2;} SEMICOLON block END_PROGRAM { }
          ;

block:
          declaration SEMICOLON block2 BEGIN_PROGRAM {output << ": START\n"; }  statement SEMICOLON block3 { }
          ;

block2:
          declaration SEMICOLON block2 { }
          | { }
          ;

block3:
          statement SEMICOLON block3 { }
          | { }
          ;

declaration:
          IDENT declaration2 COLON ARRAY L_PAREN NUMBER R_PAREN OF INTEGER {

		    string temp = $1; 
		/*	int i = temp.find(" "); 
			temp = temp.substr(0, i); 	
*/
            //check if identifier is valid
            if(!inSymTable(temp) && ($6 >= 0)){

              symNode s;

              s.type = 2;
              s.name = temp;
              s.size = $6;

		cout << "s.type = " << s.type <<  ", s.name = " << s.name << ", s.size = " << s.size << endl; 

              symbol_table.push_back(s);
            }

            if(inSymTable(temp)){
              error << "** Error: Line " << currLine << ": symbol \"" << $1 << "\" has already been declared.\n";
            }
            if($6 < 0){
              error << "** Error: Line " << currLine << ": array size must be greater than 0.\n";
            }


          }
          | IDENT declaration2 COLON INTEGER {

				string temp = $1;
            	int i = temp.find(" ");
		if(temp[i-1] == ','){
			temp= temp.substr(0, i-1); 
		}
		else {
            		temp = temp.substr(0, i);
		}	
              //check if identifier is valid
              if(!inSymTable(temp)){

                symNode s;

                s.type = 1;
                s.name = temp;
                s.size = -1;

		cout << "s.type = " << s.type <<  ", s.name = " << s.name << ", s.size = " << s.size << endl; 

                symbol_table.push_back(s);
              }

              if(inSymTable(temp)){
                error << "** Error: Line " << currLine << ": symbol \"" << $1 << "\" has already been declared.\n";
              }

          }
          ;

declaration2:
          COMMA IDENT declaration2 {

			string temp = $2;
            int i = temp.find(" ");
			if(temp[i-1] == ','){
                        temp= temp.substr(0, i-1);
                }
                else {
                        temp = temp.substr(0, i);
                }
              if(!inSymTable(temp)){

                symNode s;

                s.type = 1;
                s.name = temp;
                s.size = -1;

		cout << "s.type = " << s.type <<  ", s.name = " << s.name << ", s.size = " << s.size << endl; 

                symbol_table.push_back(s);
              }

              if(inSymTable(temp)){
                error << "** Error: Line " << currLine << ": symbol \"" << $2 << "\" has already been declared.\n";
              }
          }
          | { }
          ;

statement:
          var ASSIGN expression {printf("statement -> var assign expression\n"); }
          | IF bool_exp THEN statement SEMICOLON statement2 ENDIF {printf("statement -> if bool_exp then statement semicolon statement2 endif\n"); }
          | WHILE bool_exp BEGINLOOP statement SEMICOLON statement2 ENDLOOP {printf("statement -> while bool_exp beginloop statement semicolon statement2 endloop\n"); }
          | DO BEGINLOOP statement SEMICOLON statement2 ENDLOOP WHILE bool_exp {printf("statement -> do beginloop statement semicolon statement2 endloop while bool_exp\n"); }
          | READ var statement3 {printf("statement -> read var statement3\n"); }
          | WRITE var statement3 {printf("statement -> write var statement3\n");}
          | CONTINUE {printf("statement -> continue\n");}
          ;

statement2:
          statement SEMICOLON statement2 {printf("statement2 -> statement semicolon statement2\n"); }
          | ELSE statement2 {printf("statement2 -> else statement2 \n"); }
          | {printf("statement2 -> \n"); }
          ;

statement3:
          COMMA var statement3 {printf("statement3 -> comma var statement3\n"); }
          | {printf("statement3 -> \n");}
          ;

bool_exp: relation_and_exp bool_exp2 {printf("bool_exp -> relation_and_exp bool_exp2\n"); }
          ;

bool_exp2:
          OR relation_and_exp bool_exp2 {printf("bool_exp2 -> or relation_and_exp bool_exp2\n"); }
          | {printf("bool_exp2 -> \n"); }
          ;

relation_and_exp:
          relation_exp relation_and_exp2 {printf("relation_and_exp -> relation_exp relation_and_exp2\n"); }
          ;

relation_and_exp2:
          AND relation_exp relation_and_exp2 {printf("relation_and_exp2 -> and relation_exp relation_and_exp2\n"); }
          | {printf("relation_and_exp2 -> \n"); }



relation_exp:
          NOT expression comp expression {printf("relation_exp -> not expression comp expression\n"); }
          | NOT TRUE {printf("relation_exp -> not true\n"); }
          | NOT FALSE {printf("relation_exp -> not false\n"); }
          | NOT L_PAREN bool_exp R_PAREN {printf("relation_exp -> not l_paren bool_exp r_paren\n"); }
          | expression comp expression {printf("relation_exp -> expression comp expression\n"); }
          | TRUE {printf("relation_exp -> true\n"); }
          | FALSE {printf("relation_exp -> false\n"); }
          | L_PAREN bool_exp R_PAREN {printf("relation_exp -> l_paren bool_exp r_paren\n"); }
          ;

comp:
          EQ {printf("comp -> EQ\n"); }
          | NEQ {printf("comp -> NEQ\n"); }
          | LT {printf("comp -> LT\n"); }
          | GT {printf("comp -> GT\n"); }
          | LTE {printf("comp -> LTE\n"); }
          | GTE {printf("comp -> GTE\n"); }
          ;

expression:
          multiplicative_exp expression2 {printf("expression -> multiplicative_exp expression2\n")}
          ;

expression2:
          ADD multiplicative_exp expression2 {printf("expression -> add multiplicative_exp expression2\n"); }
          | SUB multiplicative_exp expression2{printf("expression -> sub multiplicative_exp expression2\n"); }
          | {printf("expression2 -> \n"); }
          ;

multiplicative_exp:
          term multiplicative_exp2 {printf("multiplicative_exp -> term multiplicative_exp2\n"); }
          ;

multiplicative_exp2:
          MULT term multiplicative_exp2 {printf("multiplicative_mult -> multiply term multiplicative_exp2\n"); }
          | DIV term multiplicative_exp2 {printf("multiplicative_div -> divide term multiplicative_exp2\n"); }
          | MOD term multiplicative_exp2 {printf("multiplicative_mod -> mod term multiplicative_exp2\n"); }
          | {printf("multiplicative_exp2 -> \n"); }
          ;

term:
          SUB var {printf("term -> sub term\n"); }
          | SUB NUMBER {printf("term -> sub number\n"); }
          | SUB L_PAREN expression R_PAREN {printf("term -> sub l_paren expression r_paren\n"); }
          | var {printf("term -> term\n"); }
          | NUMBER {printf("term -> number\n"); }
          | L_PAREN expression R_PAREN {printf("term -> l_paren expression r_paren\n"); }
          ;

var:
        IDENT {
			//check if IDENT is already in table && not array 
               output << "IDENT: " << $1 <<  endl; 
        }  
		| IDENT L_PAREN expression R_PAREN {printf("var -> identifier l_paren expression r_paren\n"); }
          ;



%%

int main(int argc, char **argv) {

    ofstream myfile;

    yyparse();

    for(int i=0; i<symbol_table.size(); i++){
      if(symbol_table[i].type == 1){
        toFile << ". _"<< symbol_table[i].name<<endl;
      }
      else if(symbol_table[i].type == 2){
        toFile << ".[] _" << symbol_table[i].name <<", " << symbol_table[i].size<<endl;
      }
    }

    toFile << output.str() << endl;

    string filename = program_name + ".mil";
    myfile.open(filename.c_str());
    myfile << toFile.str();
    myfile.close();

   return 0;
}

void yyerror(const char *msg) {
   printf("** Line %d, position %d: %s\n", currLine, currPos, msg);
}

// check if var == filename or if var name is already declared 
bool inSymTable(string s){

    for(unsigned int i = 0; i < symbol_table.size(); i++){
      if(symbol_table[i].name == s){
        return true;
      }
    }

  return false;
}
