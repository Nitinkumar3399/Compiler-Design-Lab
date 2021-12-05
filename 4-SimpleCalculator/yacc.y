%{ 
   /* Definition section */
  #include<stdio.h> 
  int flag=0; 
%} 

%token NAME NUMBER 

%left GE LE EQ NE EE '<' '>'
%left '+' '-'
%left '*' '/' '%'
%left '(' ')'
%nonassoc UMINUS

/* Rule Section */
%% 
  
ArithmeticExpression: E { 
         printf("\nResult=%d", $$); 
         return 0; 
        }; 

E  :E '+' E { $$ = $1 + $3; }
   |E '-' E { $$ = $1 - $3; }
   |E '*' E { $$ = $1 * $3; }
   |E '/' E { $$ = $1 / $3; }
   |E '%' E { $$ = $1 % $3; }
   |'(' E ')' { $$ = $2; } 
   | NUMBER { $$ = $1; } 
   |'-' E { $$ = -$2; }
   ; 
%% 
  
int main() 
{ 
   printf("\nEnter Any Arithmetic Expression which can have operations + - * / Mod and (Round Brackets):\n");
   yyparse(); 
   if(flag==0) 
   printf("\nEntered arithmetic expression is Valid\n\n"); 
    return 0;
} 
  
int yyerror() { 
   printf("\nEntered arithmetic expression is Invalid\n\n"); 
   flag=1; 
} 

int yywrap() {
    return 1;
}
