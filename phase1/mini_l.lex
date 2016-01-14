   /* cs152-fall08 */
   /* A flex scanner specification for the calculator language */
   /* Written by Dennis Jeffrey */

%{   
   int currLine = 1, currPos = 1;
   int numNumbers = 0;
   int numOperators = 0;
   int numParens = 0;
   int numEquals = 0;
   int numReserved = 0;
%}

DIGIT    [0-9]
ID      [a-z][a-z0-p_]*[a-z0-9]*
%%
"program"      {printf("PROGRAM\n"); currPos += yyleng; numReserved++;}
"beginprogram" {printf("BEGIN_PROGRAM\n"); currPos += yyleng; numReserved++;}
"endprogram"   {printf("END_PROGRAM\n"); currPos += yyleng; numReserved++;}
"integer"      {printf("INTEGER\n"); currPos += yyleng; numReserved++;}
"array"        {printf("INTEGER\n"); currPos += yyleng; numReserved++;}
"of"           {printf("OF\n"); currPos += yyleng; numReserved++;}
"if"           {printf("IF\n"); currPos += yyleng; numReserved++;}
"then"         {printf("THEN\n"); currPos += yyleng; numReserved++;}
"endif"        {printf("ENDIF\n"); currPos += yyleng; numReserved++;}
"else"         {printf("ELSE\n"); currPos += yyleng; numReserved++;}
"elseif"       {printf("ELSEIF\n"); currPos += yyleng; numReserved++;}
"while"        {printf("WHILE\n"); currPos += yyleng; numReserved++;}
"do"           {printf("DO\n"); currPos += yyleng; numReserved++;}
"beginloop"    {printf("BEGINLOOP\n"); currPos += yyleng; numReserved++;}
"endloop"      {printf("ENDLOOP\n"); currPos += yyleng; numReserved++;}
"break"        {printf("BREAK\n"); currPos += yyleng; numReserved++;}
"continue"     {printf("CONTINUE\n"); currPos += yyleng; numReserved++;}
"exit"         {printf("EXIT\n"); currPos += yyleng; numReserved++;}
"read"         {printf("READ\n"); currPos += yyleng; numReserved++;}
"write"        {printf("WRITE\n"); currPos += yyleng; numReserved++;}
"and"          {printf("AND\n"); currPos += yyleng; numReserved++;}
"or"           {printf("OR\n"); currPos += yyleng; numReserved++;}
"not"          {printf("NOT\n"); currPos += yyleng; numReserved++;}
"true"         {printf("TRUE\n"); currPos += yyleng; numReserved++;}
"false"        {printf("FALSE\n"); currPos += yyleng; numReserved++;} 
"-"            {printf("SUB\n"); currPos += yyleng; numOperators++;}
"+"            {printf("ADD\n"); currPos += yyleng; numOperators++;}
"*"            {printf("MULT\n"); currPos += yyleng; numOperators++;}
"/"            {printf("DIV\n"); currPos += yyleng; numOperators++;}
"%"            {printf("MOD\n"); currPos += yyleng; numOperators++;}
"="            {printf("EQ\n"); currPos += yyleng; numEquals++;}
"<>"           {printf("NEQ\n"); currPos += yyleng;}
"<"            {printf("LT\n"); currPos += yyleng;}
">"            {printf("GT\n"); currPos += yyleng;}
"<="           {printf("LTE\n"); currPos += yyleng;}
">="           {printf("GTE\n"); currPos += yyleng;}
"("            {printf("L_PAREN\n"); currPos += yyleng; numParens++;}
")"            {printf("R_PAREN\n"); currPos += yyleng; numParens++;}
";"            {printf("SEMICOLON\n"); currPos += yyleng;}
":"            {printf("COLON\n"); currPos += yyleng;}
","            {printf("COMMA\n"); currPos += yyleng;}
"?"            {printf("QUESTION\n"); currPos += yyleng;}
"["            {printf("L_BRACKET\n"); currPos += yyleng;}
"]"            {printf("R_BRACKET\n"); currPos += yyleng;}
":="           {printf("ASSIGN\n"); currPos += yyleng;}
{ID}           {printf("IDENT %s\n", yytext); currPos += yyleng;}
(\.{DIGIT}+)|({DIGIT}+(\.{DIGIT}*)?([eE][+-]?[0-9]+)?)   {printf("NUMBER %s\n", yytext); currPos += yyleng; numNumbers++;}
[##]+           {currLine++; currPos = 1;}
[ \t]+         {/* ignore spaces */ currPos += yyleng;}

"\n"           {currLine++; currPos = 1;}

.              {printf("Error at line %d, column %d: unrecognized symbol \"%s\"\n", currLine, currPos, yytext); exit(0);}

%%

int main(int argc, char ** argv)
{
   if(argc >= 2)
   {
      yyin = fopen(argv[1], "r");
      if(yyin == NULL)
      {
         yyin = stdin;
      }
   }
   else
   {
      yyin = stdin;
   }
   
   yylex();
   
}

