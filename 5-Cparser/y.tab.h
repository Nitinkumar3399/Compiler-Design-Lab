
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     int_const = 258,
     char_const = 259,
     float_const = 260,
     id = 261,
     string = 262,
     data_type = 263,
     DEFINE = 264,
     IF = 265,
     FOR = 266,
     DO = 267,
     WHILE = 268,
     BREAK = 269,
     CONTINUE = 270,
     RETURN = 271,
     GOTO = 272,
     inc_const = 273,
     ELSE = 274,
     HEADER = 275,
     Arithmetic_operators = 276,
     Relational_operators = 277,
     Logical_operators = 278,
     Bitwise_operators = 279,
     Assignment_operators = 280
   };
#endif
/* Tokens.  */
#define int_const 258
#define char_const 259
#define float_const 260
#define id 261
#define string 262
#define data_type 263
#define DEFINE 264
#define IF 265
#define FOR 266
#define DO 267
#define WHILE 268
#define BREAK 269
#define CONTINUE 270
#define RETURN 271
#define GOTO 272
#define inc_const 273
#define ELSE 274
#define HEADER 275
#define Arithmetic_operators 276
#define Relational_operators 277
#define Logical_operators 278
#define Bitwise_operators 279
#define Assignment_operators 280




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


