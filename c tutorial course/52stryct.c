#include<stdio.h>
#include<string.h>
    struct student{
        int id;
        int marks;
        char fav_char;
        char name[34];
        
    }niraj,ravi;
int main() 
{
    // struct student niraj,ravi;
    niraj.id =2;
    ravi.id =6;
    niraj.marks =76;
    ravi.marks =99;
    niraj.fav_char ='r';
    niraj.fav_char ='h';
    strcpy(niraj.name, "niraj bhai \n");
    printf("niraj got  %d marks\n", niraj.marks);
    printf("niraj got %d id\n", niraj.id);
    printf("niraj has %c favorite character\n", niraj.fav_char);
    
    printf("ravi got %d marks\n",ravi.marks);
    printf("ravi got %d id\n",ravi.id);
    printf("ravi has %c favorite character\n",ravi.fav_char);
    printf("niraj's name is %s\n",niraj.name);
    return 0;  
}