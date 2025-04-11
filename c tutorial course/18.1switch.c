#include <stdio.h>    
int main(){    
   int age ;
   printf("enter 1 for age is from 18 to 110\n"
           "enter 2 for age is from 3 to  9\n"
           "enter 3 for age is from 10 to 18\n ");
           scanf("%d", &age);
switch(age){
    case 1 : printf("you can vote!");
                            break;
    case 2 :printf("you are between 3 to 9 and you can vote for babies");
                            break;
    case 3 :printf("you are between 10 to 17 you caN vote for kids");
                            break;
    default : printf("i think you can not exist  ");
    break;

}

return 0;   
}  