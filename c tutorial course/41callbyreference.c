#include<stdio.h>
void swap(int* x,int* y){
    int f;
    f=*x;
    *x=*y;
    *y=f;
    return;
}
int main() 
{
    int a ,b;
    printf("enter the values you want to exchange\n");
    scanf("%d%d",&a,&b);
    printf("%d      %d\n", a,b);
    swap(&a,&b);
    printf("%d      %d\n", a,b);


    return 0;  
}