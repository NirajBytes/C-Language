#include<stdio.h>
int fun1(int b1){
    static int myvar  ;
    printf("The value of myvar is %d \n",myvar);
    myvar++;
    return myvar + b1;
}
int main() 
{
    int b =344;
    fun1(b);
    fun1(b);
    fun1(b);
    fun1(b);
    fun1(b);
    fun1(b);
    fun1(b);            
    return 0;  
}