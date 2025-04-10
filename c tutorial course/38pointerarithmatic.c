#include<stdio.h>
int main() 
{
    int a;
    int* ptra=&a;
    printf("%d\n",ptra);
    ptra++;
    printf("%d\n",ptra);
    printf("%d\n",ptra+2);

    return 0;  
}