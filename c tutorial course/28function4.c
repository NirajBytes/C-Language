#include <stdio.h>
void myname();    // without arguments and without returned value
int main(){    
    printf("what is your name\n");
 myname();
return 0;   
}  
void myname(){
    printf("my name is niraj\n");
}
/*WHAT IS A FUNCTION

■Functions are used to divide a large c program into smaller pieces

A function can be called multiple times to provide reusability and modularity to the C program

■ Also called procedure or subroutine

FUNCTION: SYNTAX

The basic syntax of a C functions is written as follows: 
return_type function_name(data_type parameter 1, data type parameter2,...)

{code to be executed}

ADVANTAGES OF C FUNCTIONS

We can avoid rewriting same logic through functions

We can divide work among programmers using functions

We can easily debug a program using functions

DECLARATION, DEFINITION AND CALL

A function is declared to tell a compiler about its existence

A function is defined to get some task done

A function is called in order to be used

FUNCTION CODE EXAMPLES

Without arguments and without return value

Without arguments and with return value

With arguments and without return value

With arguments and with return value
*/