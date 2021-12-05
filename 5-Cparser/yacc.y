%{
	#include<stdio.h>
	int yylex(void);
	int yyerror(const char *s);
	int success = 1;
%}

%token int_const char_const float_const id string data_type DEFINE
%token IF FOR DO WHILE BREAK CONTINUE RETURN GOTO inc_const
%token ELSE HEADER
%token Arithmetic_operators Relational_operators Logical_operators Bitwise_operators Assignment_operators
%left '+' '-'
%left '*' '/'
%nonassoc "then"
%nonassoc ELSE
%start program_unit
%%

program_unit      : HEADER program_unit
					| translation_unit
					;

translation_unit     : func_defination
                  | func_defination translation_unit
                  | decl ';' translation_unit
                  ;

func_defination      : data_type func_name '{' body '}'
                  ;

func_name	: declarator '('		')'
			         | declarator '(' param_list ')'
			         ;

declarator	   : pointer direct_declarator
			   |	direct_declarator
			   ;

direct_declarator    : id
                  ;

pointer	: '*'
			| '*' pointer
			;

param_list	   : param_decl
			   | param_decl ',' param_list
            ;

param_decl     : data_type init_declarator
			   ;

body	   : stat_list body
	   | decl_list body
      |  stat_list
	   | decl_list  
		;

decl_list	   : decl ';'
			   | decl ';' decl_list
			   ;

decl	   : data_type init_declarator_list 
      ;

init_declarator_list	   : init_declarator
			            | init_declarator_list ',' init_declarator
			            ;

init_declarator      : declarator
			         | declarator '=' consts
			         ;

stat_list      : stat
			   | stat stat_list
            ;

stat		   : selection_stat
			| iteration_stat
			| jump_stat
			| exp_stat ';'
         ;

selection_stat		: IF '(' exp_stat ')' '{' body '}'
			| IF '(' exp_stat ')' '{' body '}' ELSE '{' body '}'
			;

iteration_stat	   : WHILE '(' exp_stat ')' '{' body '}'
               | DO '{' body '}' WHILE '(' exp_stat ')' ';'
               | FOR '(' exp_stat ';' exp_stat ';' exp_stat ')' '{' body '}'
               | FOR '(' exp_stat ';' exp_stat ';'	')' '{' body '}'
               | FOR '(' exp_stat ';'	';' exp_stat ')' '{' body '}'
               | FOR '(' exp_stat ';'	';'	')' '{' body '}'
               | FOR '('	';' exp_stat ';' exp_stat ')' '{' body '}'
               | FOR '('	';' exp_stat ';'	')' '{' body '}'
               | FOR '('	';'	';' exp_stat ')' '{' body '}'
               | FOR '('	';'	';'	')' '{' body '}'
               ;

jump_stat      : CONTINUE ';'
			   | BREAK ';'
			   | RETURN exp_stat ';'
			   | RETURN	';'
			   ;

exp_stat      : consts Assignment_operators exp_stat
      | consts Opearators exp_stat
      | consts '*' exp_stat
      | consts inc_const
      | consts
      | consts '=' exp_stat
      ;

Opearators     : Arithmetic_operators | Relational_operators 
            | Logical_operators | Bitwise_operators
            ;

consts	   : int_const 											
			| char_const
			| float_const
         | id
			;

%%

int main()
{
    yyparse();
    if(success)
    	printf("Parsing Successful\n");
    return 0;
}

int yyerror(const char *msg)
{
	extern int yylineno;
	printf("Parsing Failed\nLine Number: %d %s\n",yylineno,msg);
	success = 0;
	return 0;
}
