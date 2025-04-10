#include<stdio.h>
void changevalue(int* n){
    
    *n = 465;

}
int main() 
{
    int a = 12 ;
    printf("the value of a is %d\n",a);
    changevalue(&a);
    printf("the value of a is now %d\n",a);
    return 0;

    return 0;  
}