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

beginprogram:
            BEGIN_PROGRAM {printf("begin_program -> BEGIN_PROGRAM\n");}
            ;
statements:
            ;
endprogram:
            END_PROGRAM {printf("end_program ->END_PROGRAM\n");}
            ;

declarations:
            declaration semicolon declarations {printf("declarations -> declaration semicolon declarations\n");}
            |{printf("declarations -> epsilon\n");} 
            ;

declaration:
            identifier identMore colon array left_paren number right_paren of integer {printf("declaration -> identifier indentMore colon array left_paren number right_paren of integer\n");            }
            |identifier identMore colon integer {printf("declaration -> indentifier indetMore colon integer\n");}
            ;

identMore:
            comma identMore {printf("identMore -> comma indentMore\n");}
            |{printf("identMore -> epsilon\n");}
            ;
colon:
            COLON {printf("colon -> COLON\n");}
            ;
array:      
            ARRAY {printf("array -> ARRAY\n");}
            ;

left_paren:
            L_PAREN {printf("l_paren -> L_PAREN\n");}
            ;
number:
            NUMBER {printf("number -> NUMBER(%d)\n", $1);}
            ;
right_paren:
            R_PAREN {printf("r_paren -> R_PAREN\n");}
            ;
of:
            OF {printf("of-> OF\n");}
            ;

integer:
            INTEGER {printf("integer -> INTEGER\n");}
            ;
comma:
            COMMA {printf("comma -> COMMA\n");}
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

