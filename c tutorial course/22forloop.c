#include <stdio.h>    
int main(){    
int i,j;

/*
WHY USE FOR LOOP?

The for loop is used to iterate the statements or a part of the program several times.
  
It is used to traverse the data structures like the arrays and linked lists.

It has a little different syntax than while and do while loops

SYNTAX OF FOR LOOPS

The syntax of for loop in c language is given below:

for(Expression 1: Expression 2. Expression 3){

code to be run}

PROPERTIES OF EXPRESSION I

■ The expression represents the initialization of the loop variable.

We can initialize more than one variable in Expression 1.

Expression I is optional.

PROPERTIES OF EXPRESSION 2

■ It is a conditional expression. It checks for a specific condition to be satisfied.
  If it is not, the loop is terminated. It can have more than one condition. However,
  the loop will iterate until the last condition becomes false. Other conditions  
  will be treated as statements.

  It is optional.

■ Expression 2 can perform the task of expression I and expression 3. That is, we can
  initialize the variable as well as update the loop variable in expression 2 itself.

 We can pass zero or non-zero value in expression 2. However, in C, any non-zero value 
 is true, and zero is false by default.

PROPERTIES OF EXPRESSION 3

■ Expression 3 is used to update the loop variable.

We can update more than one variable at the same time.

Expression 3 is optional.
*/
for(i=0,j=0;j<1,i<7;i++,j++)
{
printf("%d %d\n" ,i ,j);
}
return 0;   
}   