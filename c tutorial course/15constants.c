/*CONSTANTS IN C

A constant is a value or variable that can't be changed in the program, for example: 15.23, 'a', 3.4,"code with harry" etc.

There are two ways to define constant in C programming.

⚫ const keyword
⚫ #define preprocessor

*/
#include <stdio.h>  
#define PI 3.14   // in # statement ; not needed  
int main(){    
int a=8;
//PI = 7.33  dont do this since PI is constant
const float b=7.333;
//float b=8.3 ; dont do this since b is constant
printf("%f\n", b);   
printf("%f", PI);   
return 0;   

}  
