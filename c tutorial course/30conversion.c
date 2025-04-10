#include <stdio.h>    
int main(){
    int num;
    float i; 
printf("enter 1 to convert kms to miles\n");
printf("enter 2 to convert inches to foot\n");
printf("enter 3 to convert pound to kgs\n");
printf("enter 4 to convert inches  to meters\n");
scanf("%d" ,&num);
 
switch(num){
    case 1 : 
              printf("enter kms to convert  into mile\n");
              scanf("%f",&i);
              printf("%f kms is %f miles\n", i,i*0.62137119);
    break;

    case 2 :
              printf("enter inches to convert into foot\n");
              scanf("%f",&i);
              printf("%f inches is %f foots\n", i,i*0.0833);
    break;
    case 3 :
              printf("enter pounds to convert  into kgs\n");
              scanf("%f",&i);
              printf("%f pound is %f kgs\n", i,i*0.45359237);
    break;
    case 4 :
              printf("enter inches to convert  into meters\n");
              scanf("%f",&i);
              printf("%f inches is %f meters\n", i,i*0.0254);
    break;
   default : printf("enter number in range of (1 to 4 )");

}

return 0;   
}  