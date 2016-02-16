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
            statement semicolon statements {printf("statements -> statement semicolon statements\n");}
            |{printf("statements -> epsilon\n");}
            ;

statement:
            continue {printf("statement -> continue\n");}
            | write Vars {printf("statement -> write Vars\n");}
            | read Vars {printf("statement -> read Vars\n");}
            | do beginloop statements1 endloop while bool_exp {printf("statement -> do beginloop statements1 endloop while bool_exp\n");}
            | while bool_exp beginloop statements1 endloop {printf("statement -> while bool_exp beginloop statements1 endloop\n");}
            | if bool_exp then statements1 elseOption endif {printf("statement -> if bool_exp then statements1 elseOption endif\n");}
            | Vars assign expression {printf("statement -> var assign expression\n");}
            ;

if: 
            IF {printf("if -> IF\n");}
            ;

then:
            THEN {printf("then -> THEN\n");}
            ;

elseOption:
            else statements1 {printf("elseOpition -> else statements1\n");}
            | {printf("elseOpitoin -> epsilon\n");}
            ;

else:
            ELSE {printf("else -> ELSE\n");}
            ;
endif:
            ENDIF {printf("endif -> ENDIF\n")}
            ;
assign:
            ASSIGN {printf("assign -> ASSIGN\n");}
            ;

expression:
            ;

do:
            DO {printf("do -> DO\n");}
            ;

beginloop:
            BEGINLOOP {printf("beginloop -> BEGINLOOP\n");}
            ;

statements1:
            ;

endloop:
            ENDLOOP {printf("endloop -> ENDLOOP\n");}
            ;

while:
            WHILE {printf("while -> WHILE\n");}
            ;

bool_exp:
            ; 
write:
            WRITE {printf("write -> WRITE\n");}
            ;

read:
            READ {printf("read -> READ\n");}
            ;

Vars:
            ;
continue:
            CONTINUE {printf("continue -> CONTINUE\n");}
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

