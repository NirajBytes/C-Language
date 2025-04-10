#include<stdio.h>
int main() 
{
    int rev =0;
    int remainder,number;
    number =123;
    while(number !=0){
        remainder = number %10;
        rev = rev*10 + remainder;
        number = number/10;

    }
    printf("%d\n",rev);

    return 0;  
}