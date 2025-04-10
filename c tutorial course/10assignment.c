/*ASSIGNMENT OPERATORS

Operator                                                            Description

a=b               Simple assignment operator. Assigns values from right side operands to left side operand

a+=b i.e,a=a+b              Add AND assignment operator. It adds the right operand to the left operand and assign the result to the left operand.

a-=b i.e,a=a-b              Subtract AND assignment operator. It subtracts the right operand from the left operand and the result is assigned to the left operand

a*=b i.e,a=a*b              Multiply AND assignment operator. It multiplies the right operand with the left operand and the result is assigned to the left operand

a/=b i.e,a=a\b              Divide AND assignment operator. It divides the left operand with the right operand and the result is assigned to the left operand

a%=b i.e,a=a%b
a*/
#include<stdio.h>
int main() 
{
    int a=4;
    int b=2;
    // a+=b;
    a-=b;
    // b=a;
    printf("%d\n",a);
    printf("%d",b);

    return 0;  
};