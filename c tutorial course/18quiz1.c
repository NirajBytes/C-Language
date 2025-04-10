/*
if statement in c -------> control statements
it is used to perform operation based some conditions */
#include <stdio.h>    
int main(){    
int subject;

printf("enter subject you passed\n");      // types 
printf("enter 1 for science\n");            // if statement
printf("enter 2 for maths\n");              // if else
printf("enter 3 for both\n");               //if else if ladder
scanf("%d" ,&subject);                       //nested if
if(subject==1){
    printf("you won 15 rs");

}
else if(subject==2){
    printf("you won 15 rs");

}
else if(subject==3){
    printf("you won 45 rs");

}
else{
    printf("invalid sub");

}
return 0;   
}  