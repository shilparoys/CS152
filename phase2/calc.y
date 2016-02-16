/* Shilpa Chirackel 861060176
   Rachel Law 
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
            | 
            program identifier semicolon block endprogram {printf("program_start -> program identifier semicolon block endprogram\n");}
            ; 

program:
            PROGRAM {printf("program -> PROGRAM\n");}
            ;
identifier:
            IDENT {printf("ident -> IDENT (%s)\n", $1);}
            ;
semicolon:
            SEMICOLON {printf("semicolon -> SEMICOLON\n");}
            ;
block:
            declarations beginprogram statements {printf("block -> declarations beginprogram statements\n");}
            ;

endprogram:
            END_PROGRAM {printf("end_program ->END_PROGRAM\n");}
            ;

declarations:
            declaration semicolon declarations {printf("declarations -> declaration semicolon declarations\n");}
            |{printf("declarations -> epsilon\n");} 
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

