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
             program identifier semicolon block endprogram 
             {printf("program_start -> program identifier semicolon block endprogram\n");}
            ; 

//nonterminals
block:
            declarations beginprogram statements 
            {printf("block -> declarations beginprogram statements\n");}
 
declarations:
            declaration semicolon declarations 
            {printf("declarations -> declaration semicolon declarations\n");}
            |{printf("declarations -> epsilon\n");} 
            ;

declaration:
            identifier identMore colon array left_paren number right_paren of integer 
            {printf("declaration -> identifier indentMore colon array left_paren number right_paren of integer\n");            }
            |identifier identMore colon integer
            {printf("declaration -> indentifier indetMore colon integer\n");}
            ;

identMore:
            comma identifier identMore 
            {printf("identMore -> comma identifier indentMore\n");}
            |{printf("identMore -> epsilon\n");}
            ;

statements:
            statement semicolon 
            {printf("statements -> statement semicolon\n");}
            |statements statement semicolon
            {printf("statements -> statements statement semicolon\n");}
            ;

statement:
            continue 
            {printf("statement -> continue\n");}
            | write Vars 
            {printf("statement -> write Vars\n");}
            | read Vars 
            {printf("statement -> read Vars\n");}
            | do beginloop statements1 endloop while bool_exp 
            {printf("statement -> do beginloop statements1 endloop while bool_exp\n");}
            | while bool_exp beginloop statements1 endloop 
            {printf("statement -> while bool_exp beginloop statements1 endloop\n");}
            | if bool_exp then statements1 elseOption endif 
            {printf("statement -> if bool_exp then statements1 elseOption endif\n");}
            | Var assign expression {printf("statement -> Var assign expression\n");}
            ;
Vars:
            Vars comma Var 
            {printf("Vars -> Vars comma Var\n")}
            |Var
            {printf("Vars -> Var\n");}
            ;

Var:
            identifier 
            {printf("Var -> identifier\n");}
            |identifier left_paren expression right_paren 
            {printf("Vars -> identifier left_paren expression right_paren\n");}


statements1:
            {printf("statements1 -> epsilon\n");}
            | statement semicolon statements1 
            {printf("statements1 -> statement semicolon statements1\n");}
            ;

elseOption:
            else statements1 
            {printf("elseOpition -> else statements1\n");}
            | {printf("elseOpitoin -> epsilon\n");}
            ;


bool_exp:
            relation_and_exp relation_or 
            {printf("bool_exp -> relation_and_exp relation_or \n");}
            ;

relation_and_exp:
            relation_exp relation_and 
            {printf("relation_and_exp -> relation_exp relation_and\n");}
            ;

relation_or:
            or relation_and_exp relation_or 
            {printf("relation_or -> or relation_and_exp relation_or\n");}
            | {printf("relation_or -> epsilon\n");}
            ;

relation_and:
            and relation_exp relation_and 
            {printf("relation_and -> and relation_exp relation_and\n");}
            | {printf("relation_and -> epsilon\n");}
            ;


relation_exp:
            expression comp expression 
            {printf("relation_exp -> expression comp expression\n");}
            | true 
            {printf("relation_exp -> true\n");}
            | false 
            {printf("relation_exp -> false\n");}
            | left_paren bool_exp right_paren 
            {printf("relation_exp -> left_paren bool_exp right_paren\n");}
            | not expression comp expression 
            {printf("relation_exp -> not expression comp expression\n");}
            | not true 
            {printf("relation_exp -> not true\n");}
            | not false 
            {printf("relation_exp -> not false\n")};
            | not left_paren bool_exp right_paren 
            {printf("relation_exp -> not left_paren bool_exp right_paren\n");}
            ;

expression:
            multplicative_exp moreMultExp 
            {printf("expression -> multiplicative_exp moreMultExp\n");}
            ;


multplicative_exp:
            term terms 
            {printf("multplicative_exp -> term terms\n");}
            ;

term:
            minus Var
             {printf("term -> sub Vars\n");}
            | minus number 
            {printf("term -> sub number\n");}
            | minus left_paren expression right_paren 
            {printf("term -> sub left_paren expression right_paren\n");}
            | Var 
            {printf("term -> Var\n");}
            | number
             {printf("term -> number\n");}
            | left_paren expression right_paren 
            {printf("term -> left_paren expression right_paren\n");}
            ;
terms:
            terms mult term 
            {printf("terms -> terms mult term\n");}
            |terms div term 
            {printf("terms -> terms div term\n");}
            |terms mod term 
            {printf("terms -> terms mod term\n");}
            |{printf("terms -> epsilon\n");}
            ;

moreMultExp:
            plus multplicative_exp moreMultExp
            {printf("moreMultExp -> plus multplicative_exp moreMultExp\n");}
            | minus multplicative_exp moreMultExp
            {printf("moreMultExp -> minus multiplicative_exp moreMultExp\n");}
            | {printf("moreMultExp -> epsilon\n")};
            ;




//terminals
program:
            PROGRAM {printf("program -> PROGRAM\n");}
            |error{printf("error: program\n");};
identifier:
            IDENT {printf("identifier -> IDENT (%s)\n", $1);}
            |error{printf("error: identifier\n");}
            ;
semicolon:
            SEMICOLON {printf("semicolon -> SEMICOLON\n");}
            |error{printf("error: semicolon\n");}
            ;

beginprogram:
            BEGIN_PROGRAM {printf("begin_program -> BEGIN_PROGRAM\n");}
            |error{printf("error: beginprogram\n");}
            ;

endprogram:
            END_PROGRAM {printf("end_program ->END_PROGRAM\n");}
            |error{printf("error: endprogram\n");}
            ;

colon:
            COLON {printf("colon -> COLON\n");}
            |error{printf("error: colon\n");}
            ;
array:      
            ARRAY {printf("array -> ARRAY\n");}
            |error{printf("error: array\n");}
            ;

left_paren:
            L_PAREN {printf("l_paren -> L_PAREN\n");}
            |error{printf("error: left_paren\n");}
            ;
number:
            NUMBER {printf("number -> NUMBER(%d)\n", $1);}
            |error{printf("error: number\n");}
            ;
right_paren:
            R_PAREN {printf("r_paren -> R_PAREN\n");}
            |error{printf("error: right_paren\n");}
            ;
of:
            OF {printf("of-> OF\n");}
            |error{printf("error: of\n");}
            ;

integer:
            INTEGER {printf("integer -> INTEGER\n");}
            |error{printf("error: integer\n");}
            ;
comma:
            COMMA {printf("comma -> COMMA\n");}
            |error{printf("error: comma\n");}
            ;

continue:
            CONTINUE {printf("continue -> CONTINUE\n");}
            |error{printf("error: continue\n");}
            ;
write:
            WRITE {printf("write -> WRITE\n");}
            |error{printf("error: write\n");}
            ;

read:
            READ {printf("read -> READ\n");}
            |error{printf("error: read\n");}
            ;   
do:
            DO {printf("do -> DO\n");}
            |error{printf("error: do\n");}
            ;

beginloop:
            BEGINLOOP {printf("beginloop -> BEGINLOOP\n");}
            |error{printf("error: beginloop\n");}
            ;   

endloop:
            ENDLOOP {printf("endloop -> ENDLOOP\n");}
            |error{printf("error: endloop\n");}
            ;

while:
            WHILE {printf("while -> WHILE\n");}
            |error{printf("error: while\n");}
            ;
if: 
            IF {printf("if -> IF\n");}
            |error{printf("error: if\n");}
            ;

then:
            THEN {printf("then -> THEN\n");}
            |error{printf("error: then\n");}
            ;

else:
            ELSE {printf("else -> ELSE\n");}
            |error{printf("error: else\n");}
            ;
endif:
            ENDIF {printf("endif -> ENDIF\n")}
            |error{printf("error: endif\n");}
            ;
assign:
            ASSIGN {printf("assign -> ASSIGN\n");}
            |error{printf("error: assign\n");}
            ;

and:
            AND {printf("and -> AND\n");}
            |error{printf("error: and\n");}
            ;

or:
            OR {printf("or -> OR\n");}
            |error{printf("error: or\n");}
            ;

true:
            TRUE {printf("true -> TRUE\n");}
            |error{printf("error: true\n");}
            ;

false:
            FALSE {printf("false -> FALSE\n");}
            |error{printf("error: false\n");}
            ;

not:
            NOT {printf("not -> NOT\n");}
            |error{printf("error: not\n");}
            ;

comp:
            EQ {printf("comp -> EQ\n");}
            | NEQ {printf("comp -> NEQ\n");}
            | LT {printf("comp -> LT\n");}
            | GT {printf("comp -> GT\n");}
            | LTE {printf("comp -> LTE\n");}
            | GTE {printf("comp -> GTE\n");}
            ;


mult:
            MULT {printf("mult -> MULT\n");}
            |error{printf("error: mult\n");}
            ;

div:
            DIV {printf("div -> DIV\n");}
            |error{printf("error: div\n");}
            ;

mod:
            MOD {printf("mod -> MOD\n");}
            |error{printf("error: mod\n");}
            ;

plus:
            ADD {printf("add -> ADD\n");}
            |error{printf("error: plus\n");}
            ;

minus:
            SUB {printf("sub -> SUB\n");}
            |error{printf("error -> minus\n");}
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

