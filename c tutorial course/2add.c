#include<stdio.h>
int main()//code exicution start from here
{
    int a,b;       // initializing variable
    printf("enter number a\n");
    scanf("%d",&a); // function to get input from user 
    printf("enter number b\n"); //  to print output on screen
    scanf("%d",&b);
    printf("sum of to numbers : %d\n" ,a+b);
    return (0);
}
//to convert program into excutable form compiler take this step :
//pre processing: reomve comments ,expand hash include files ;store in .i file
//compillation :.i fie convert into assembly level instructions: store in  .s file
//assembly :.s convert in machuine level instructions (binary):store in.o files
//linking : all .o  files convert into excitutable file here niraj.exe
//Loading: 