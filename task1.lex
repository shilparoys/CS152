/*cs152 lab 1 task 1*/
/*flex specification to recognize tokens in the calcultor language. print out an error message and exit if any unrecognized character is encoutnered in the input. Use flex to compile your specification itno an executable lexical analyzer that reads text from standard-in and prints the identified tokens to the screen, one token per line. */

%{
  int currLine = 1, currPos = 1;
%}

DIGIT [0-9]

%%

"-"		{printf("MINUS\n");  /* currPos += yyleng;*/}
"+"		{printf("PLUS\n");   /* currPos += yyleng;*/}
"*"		{printf("MULT\n");   /* currPos += yyleng;*/}
"/"		{printf("DIV\n");    /* currPos += yyleng;*/}
"="		{printf("EQUAL\n");  /* currPos += yyleng;*/}
"("		{printf("L_PAREN\n");/* currPos += yyleng;*/}
")"		{printf("R_PAREN\n");/*currPos += yyleng;*/}

{DIGIT}+	{printf("NUMBER %s\n", yytext); /*currPos += yyleng;*/}

[ \t]+		{/*ignore spaces */ /*currPos += yyleng;*/}

"\n"		{/*currLine++; currPos = 1;*/}

.		{printf("unrecognized symbol", yytext);exit(0);}

%%

int main(int argc, char **argv){
	yylex();
}	
