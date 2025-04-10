#include <stdio.h>
int takenumber(); //without argument with returned value
int main(){    
 int c;
c = takenumber(); 
printf("entered number is %d\n" , c);   
return 0;   
}  
int takenumber(){
    int i;
    printf("enter a number");
    scanf("%d", &i);
    
    return i;
}