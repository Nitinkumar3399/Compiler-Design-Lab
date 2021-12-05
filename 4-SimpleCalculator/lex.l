%{ 
/* Definition section */
#include<stdlib.h>
#include "y.tab.h"
extern int yylval;
%} 

/* Rule Section */
%% 
[0-9]+ { 
		yylval=atoi(yytext); 
		return NUMBER; 
	} 

[' '] ; 
[\n] return 0; 

. return yytext[0]; 
%% 

/*main function will not be included here*/