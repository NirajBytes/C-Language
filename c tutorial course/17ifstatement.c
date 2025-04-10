#include <stdio.h>    
int main(){    
    int age;  
    printf("enter yourr age\n") ;
    scanf("%d" ,&age);
    printf("you have entered %d as age\n" , age );
    if (age>=18 && age<=110){
        printf("you can vote!");

    }
    else if(age >=3 && age<10){
        printf("you are between 3 to 9 and you can vote for babies");
    }
    else if (age>=10 && age<18){
    printf("you are between 10 to 17 you caN vote for kids");
    }
else {
    printf("i think you can not exist 😂 ");
}
     return 0;   
}  