/*
WHAT IS FORMAT SPECIFIER  ?

is away to tell campiler what type of data in variables during taking input displaying output to user
printf("This is a good boy %a.bf", var); will print var with b decimal points in a 'a' character space.
Lets to to our IDE and learn more about the format specifiers

*/
#include<stdio.h>       
int main()              
{ int a=7;
float b=7.33;
float c=4.555;
 printf("the value of a is %d and the valueof b is %8.4f \n", a, b);
 printf("the value of c is %8.4f \n", c);//first character space then number prited
 printf("the value of c is %-8.4f \n", c);//first number print then then space given
 //in above line 8.4 make sense for print b in 8 character space with 4 decimal accuracy 
return 0;               
}
/*
%c character
%d integer
%f float
%l long
%lf double
%LF long double
*/