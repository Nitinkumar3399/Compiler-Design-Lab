This repo contains Lex &amp; Yacc code for lab practicals

----
### Compiler Practical Using flex & Bison :

IMPORTANT  
* [How to run Lex and Yacc file in windows using flex & Bison](https://www.youtube.com/watch?v=jqps7nYAkto)
* [How to compile LEX/YACC files on Windows?](https://stackoverflow.com/questions/5456011/how-to-compile-lex-yacc-files-on-windows)
* [Most Important Link](https://thesvgway.wordpress.com/2013/10/09/how-to-compile-run-lex-yacc-programs-on-windows/)

**Procedure step by step for windows :**    
If you are installing Ubuntu (or any Linux based OS) on your system either through Virtual Box or by making your system Multi-Bootable, just to execute your Lex & Yacc programs; then you might be wasting your HDD space & your valuable time. You can easily skip this annoying process and run your programs in Windows OS without any hassles.  

Here’s how you can do it:  

**Installing Softwares :**  
1. Download [Flex 2.5.4a](http://gnuwin32.sourceforge.net/downlinks/flex.php)  
2. Download [Bison 2.4.1](http://downloads.sourceforge.net/gnuwin32/bison-2.4.1-setup.exe)  
3. Install Flex at “C:\GnuWin32“  
4. Install Bison at “C:\GnuWin32“  
5. Open Environment Variables.  
6. Add “C:\GnuWin32\bin  

**Compilation & Execution of your Program :**  

Open Command prompt and switch to your working directory where you have stored your lex file (“.l“) and yacc file (“.y“)
Let your lex and yacc files be “hello.l” and “hello.y“. Now, follow the preceding steps to compile and run your program.  

**_For Compiling Lex file only :_**    
`flex hello.l`  
`gcc lex.yy.c`  
**_For Compiling Lex & Yacc file both :_**  
`flex hello.l`  
`bison -dy hello.y`  
`gcc lex.yy.c y.tab.c`  
**_For Executing the Program_**    
`a.exe`  

----
#### TUTORIAL LINKS :
* [BEST MATERIAL TO LEARN - when using LEX first time (Theory Part)](https://silcnitc.github.io/lex.html)
* [BEST MATERIAL TO LEARN - when using LEX first time (Theory Part)](http://silcnitc.github.io/yacc.html)
* [pattern matches on gfg](https://www.geeksforgeeks.org/flex-fast-lexical-analyzer-generator/)
* [Lex program to take input from file and remove multiple spaces, lines and tabs](https://www.geeksforgeeks.org/lex-program-to-take-input-from-file-and-remove-multiple-spaces-lines-and-tabs/)  

**DO PROGRAMS TO UNDERSTAND MORE :**    
* [YACC program to recognize string with grammar { anbn | n≥0 }](https://www.geeksforgeeks.org/yacc-program-to-recognize-string-with-grammar-anbn-n0/)
* [LEX Programs Archive](https://www.geeksforgeeks.org/tag/lex-program/)
