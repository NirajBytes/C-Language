#include <stdio.h>    
int main(){    
char operator;
float num1,num2,result;

printf("enter opertor : + , - , * , / ");
scanf("%C",&operator);
printf("enter num1 and num2 to perform operation");
scanf("%f%f", &num1,&num2);
switch(operator){
    case('+') :
    result=num1+num2;
    printf("result of %.2f %c %.2f is %.2f", num1,operator,num2,result
    );
    break;
    case('-') :
    result=num1-num2;
    printf("result of %.2f %c %.2f is %.2f", num1,operator,num2,result
    );
    break;
    case('*') :
    result=num1*num2;
    printf("result of %.2f %c %.2f is %.2f", num1,operator,num2,result
    );
    break;
    case('/') :
    result=num1/num2;
    printf("result of %.2f %c %.2f is %.2f", num1,operator,num2,result
    );
    break;
    default : printf("invalid  entry");
}
return 0;   
}  