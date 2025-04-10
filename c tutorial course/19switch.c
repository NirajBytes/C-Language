#include<stdio.h>
int main(){
    int day;
    printf("enter the day of week (1 to 7)");
    scanf("%d" ,&day);
    switch(day){
        case 1 : printf("today is SUNDAY");break;
        case 2 : printf("today is MONDAY");break;
        case 3 : printf("today is TUESDAY");break;
        case 4 : printf("today is WEDNESDAY");break;
        case 5 : printf("today is THURSDAY");break;
        case 6 : printf("today is FRIDAY");break;
        case 7 : printf("today is SATURDAY");break;
      default  :printf("enter valid day (1 to 7 only)");
      break; 
    }
    
    return 0;
}
//switch statementis used instide of if statement for making code in short lines
/*
Rules for Switch Statement

1> Switch expression must be an → int or char 

2> Case Value must be an integer or a character.

3> Case must come inside switch. 

4> break is not a must.