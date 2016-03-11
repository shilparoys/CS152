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

 struct symbolNode{
    int value;
    int size;
    int type;
    string name;
 };

 vector<symbolNode> symbolTable;
 int counter = 0;
 string fileName;
 stringstream output;
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
%token <numToken> NUMBER
%token <identToken> IDENT
%left OR AND SUB ADD MULT DIV MOD EQ NEQ LT GT LTE GTE L_PAREN R_PAREN
%nonassoc IF_PREC ELSE_PREC

%% 
program_start:	
             PROGRAM IDENT {fileName = $2;} SEMICOLON block END_PROGRAM 
             {}
             ; 

block:
            declarations BEGIN_PROGRAM{output << ": START << endl";} statements
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
                /*SymbolNode temp;
                temp.value = -1;
                temp.size = 0;
                temp.type = 1; //integer
                temp.name = $1;
                SymbolTable.push_back(temp);*/
            }
            |IDENT identMore COLON INTEGER
             {}
            ;

identMore:
            COMMA IDENT identMore 
            {
               /* SymbolNode temp;
                temp.type = 1; 
                temp.name = $2;
                SymbolTable.push_back(temp);*/
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
            |WRITE Vars 
            {}
            |READ Vars 
            {}
            |DO BEGINLOOP statement1  ENDLOOP WHILE bool_exp 
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
            {}
            |Var
            {}
            ;

Var:
            IDENT
            { cout << $1 << endl;}
		    |
			IDENT L_PAREN expression R_PAREN
			{}
			;

optionelse:
            ELSE statement1 
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
            OR relation_and_exp relation_or 
            {}
            | {}
            ;

relation_and:
            AND relation_exp relation_and 
            {}
            | {}
            ;


relation_exp:
			NOT relation_exp2
			{}
			|relation_exp2
			{}
			;


relation_exp2:
            expression comp expression 
            {}
            | TRUE
            {}
            | FALSE 
            {}
            |L_PAREN bool_exp R_PAREN 
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
			SUB term2
			{}
			| term2
			{}
			;

term1:
            term1 MULT term  
            {}
            |term1 DIV term 
            {}
            |term1 MOD term 
            {}
            |
			{}
            ;

term2:
            Var 
            {}
            | NUMBER 
             {}
            | L_PAREN  expression R_PAREN 
            {}
            ;
		

moreMultExp:
            ADD multplicative_exp moreMultExp
            {}
            |SUB  multplicative_exp moreMultExp
            {}
            | {};
            ;

comp:
            EQ {}
            | NEQ {}
            | LT {}
            | GT {}
            | LTE {}
            | GTE {}
            ;

%%

int main(int argc, char **argv) {
    
   yyparse(); // Calls yylex() for tokens.
    if (argc > 1) {
      yyin = fopen(argv[1], "r");
      if (yyin == NULL){
         printf("syntax: %s filename\n", argv[0]);
      }//end if
   }//end if

   //create the mil file with given program name
   fileName = fileName + ".mil";
   ofstream myFile;
   myFile.open(fileName.c_str());
   myFile.close();
   return 0;

}

void yyerror(const char *msg) {
   printf("** Line %d, position %d: %s\n", currLine, currPos, msg);
}

