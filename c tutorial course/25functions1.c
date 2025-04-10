#include<stdio.h>
int sum(int a, int b); //with arguments and with return value
int main(){
int a , b , c ;

c = sum(a , b);
printf("sum of a & b is %d\n" , c);
    return 0;
}
int sum(int a ,int b )
{
    
printf("enter value of a\n");

scanf("%d" ,&a);

printf("enter value of b\n");

scanf("%d" ,&b);

    return a+b;
}
