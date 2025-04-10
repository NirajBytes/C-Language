#include<stdio.h>
#include<string.h>
union student {
    int id;
    
    char fav_char ;
    char name[34];
};

int main() 

{
    union student s1;
    strcpy (s1.name, "niraj");
    s1.fav_char= 'N';
    
    s1.id = 22005032;
    
    printf("the id is %d \n", s1.id);
    printf("the fav_char is %c \n", s1.fav_char);
    printf("the id name %s \n", s1.name);
     
    return 0;  
}