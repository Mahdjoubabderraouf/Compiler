flex lexical.l
bison -v -o rp syntaxical_file.y 
gcc lex.yy.c syntaxical_file.tab.c -o .\my_parser -lfl -ly 
my_parser.exe<Synta1.txt