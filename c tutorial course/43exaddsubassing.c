#include<stdio.h>
void assing(int* x, int*y){
    int p,q;
    p=*x;
    q=*y;
    *x=p+q;
    *y=p-q;
}
int main() 
{
    int a,b;
    printf("enter values\n");
    scanf("%d%d",&a,&b);
    printf("the values of a & b is :\n%d\n%d\n",a,b);
    assing(&a,&b);
    printf("After operation the values of a & b is :\n%d\n%d\n",a,b);

    return 0;  
} 