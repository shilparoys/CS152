/* Shilpa Chirackel 861060176
   Rachel Law 861071722 
*/
%{
 #include <stdio.h>
 #include <stdlib.h>
 void yyerror(const char *msg);
 extern int currLine;
 extern int currPos;
 FILE * yyin;
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
             program identifier semicolon block endprogram 
             {}
            ; 

//nonterminals
block:
            declarations beginprogram statements 
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
            {}
            ;

declaration2:
			array left_paren number right_paren of
			{}
			|
			{}
			;


identMore:
            comma identifier identMore 
            {}
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
            {}
            |write Var Vars 
            {}
            |read Var Vars 
            {}
            |do beginloop statement semicolon statements endloop while bool_exp 
            {}
            |while bool_exp beginloop statement semicolon statements endloop 
            {}
            |if bool_exp then statement semicolon statements statement1 endif 
            {}
            |Var assign expression {}
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
            WRITE {}
            ;

read:
            READ {}
            ;   
do:
            DO {}
            ;

beginloop:
            BEGINLOOP {}
            ;   

endloop:
            ENDLOOP {}
            ;

while:
            WHILE {}
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
            ENDIF {}
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
            EQ {}
            | NEQ {}
            | LT {}
            | GT {}
            | LTE {}
            | GTE {}
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

