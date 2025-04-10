#include<stdio.h>
int main() 
{
  
//  typedef int integer;
//  integer a=4;
//  printf("%d",a);
// typedef struct student{
//         int id;
//         int marks;
//         char fav_char;
//         char name[34];
        
//     } std;
//     std harry,ravi;
//     harry.id =2;
//     ravi.id =6;
//     harry.marks =76;
//     ravi.marks =99;
//     harry.fav_char ='r';
//     harry.fav_char ='h';
//     strcpy(harry.name, "harry bhai \n");
//     printf("harry got  %d marks\n", harry.marks);
//     printf("harry got %d id\n", harry.id);
//     printf("harry has %c favorite character\n", harry.fav_char);
    
//     printf("ravi got %d marks\n",ravi.marks);
//     printf("ravi got %d id\n",ravi.id);
//     printf("ravi has %c favorite character\n",ravi.fav_char);
//     printf("harry's name is %s\n",harry.name);
//  int* a,b;      here only a is declered as pointer
 typedef int* intpointer; //by using this concept we can treat both a and b as pointers
 intpointer a,b;
 int c=89;
 a=&c;
 b=&c;
    return 0;  
}