/**
 * Tokens er det mindste element i et C program.
 * Det er ikke en precompiler command, i.e. #include
 * Så vi har return type: int
 * function identifier: main
 * function input parameter identifier: argc,  argv,
 * ** samt deres datatype keywords: int,char**
 * function identfier: printf
 * string: "Hello, World. \n"
 * return key-word : return
 * return value: 0.
 * function body identfier {}
 * end statement character: ;
 */

#include <stdio.h>
int main(int argc, char **argv)
{
    printf("Hello, World.\n");
    return 0;
}