#include<stdio.h>
int main() 
{
   long double  a,b,c;
    scanf("%Lf %Lf %Lf",&a,&b,&c);
   long double x= (a>=b && a>=c) ? ((b>=c) ?b:c) :((b>c) ? ((a>=c) ? a:c) : ((a>=b) ? a:b));
    printf("the second largest number is %Lf",x);

    return 0;  
}