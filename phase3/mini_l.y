/* Shilpa Chirackel 861060176
   Rachel Law 861071722 
*/
%{
 #include <stdio.h>
 #include <stdlib.h>
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

 string fileName;
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

%% 
program_start:	
             PROGRAM IDENT SEMICOLON block END_PROGRAM 
             {}
            ; 

//nonterminals
block:
            declarations BEGIN_PROGRAM statements 
            {}
            ;
 
declarations:
            declaration SEMICOLON declarations 
            {}
            |
			{} 
            ;

declaration:
            IDENT identMore COLON declaration2 INTEGER 
            {}
            ;

declaration2:
			ARRAY L_PAREN NUMBER R_PAREN OF
			{}
			|
			{}
			;


identMore:
            COMMA IDENT identMore 
            {}
            |
			{}
            ;

statements:
            statement SEMICOLON statements 
            {}
            |
            {}
            ;

statement:
            CONTINUE 
            {}
            |WRITE Var Vars 
            {}
            |READ Var Vars 
            {}
            |DO BEGINLOOP statement SEMICOLON statements ENDLOOP WHILE bool_exp 
            {}
            |WHILE bool_exp BEGINLOOP statement SEMICOLON statements ENDLOOP 
            {}
            |IF bool_exp THEN statement SEMIOCOLON statements statement1 ENDIF
            {}
            |Var ASSIGN  expression {}
            ;

statement1:
			ELSE statement SEMICOLON statements
			{}
			|
			{}
			;

Vars:
            COMMA Var Vars
            {}
            |
            {}
            ;

Var:
            IDENT var2 
            {}
			;

var2:
			L_PAREN expression R_PAREN
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
            MULT term term1 
            {}
            |DIV term term1
            {}
            |MOD term term1
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
            | MINUS multplicative_exp moreMultExp
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
   if (argc > 1) {
      yyin = fopen(argv[1], "r");
      if (yyin == NULL){
         printf("syntax: %s filename\n", argv[0]);
      }//end if
   }//end if
   yyparse(); // Calls yylex() for tokens.
   return 0;
}

void yyerror(const char *msg) {
   printf("** Line %d, position %d: %s\n", currLine, currPos, msg);
}

