#include <stdio.h>    
int main(){    
int num;
for(int i=0;i<8;i++){
    printf("%d\n" ,i);
    for(int j=0;j<8;j++)
    {
        
        printf("enter number  . enter zero to exit\n");
        scanf("%d" ,&num);
        if(num==0){
        goto end;                                                                                                   
        }
    }
    
}    
end:
return 0;   
}  
/*
BREAK STATEMENT

Used to bring the program control out of the loop

⚫ The break statement is used inside loops or switch statement.

■ Break statement can be used with

⚫  Loops

⚫ Switch case expressions

CONTINUE STATEMENT

Used to bring the program control to the next iteration of the loop

■The continue statement skips some code inside the loop and continues with the next iteration.

It is mainly used for a condition so that we can skip some lines of code for a particular condition.

GOTO STATEMENT

Also called jump statement in c

■ Used to transfer program control to a predefined label

Its use is avoided since it causes confusion for the fellow programmers in understanding the code.

Goto statement is preferable when we need to break multiple loops using a single statement at the same time.

*/