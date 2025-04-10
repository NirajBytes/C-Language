/*#include <stdio.h>    
int main(){   
    int num;
    int index =1 ;
    printf("enter number ");
scanf("%d", &num);
do{
    printf("%d\n",index);
    index=index + 1;

}    
while(index <=num );
return 0;   
}  
*/
// NOTE
//do while loop executes at least once
#include <stdio.h>    
int main(){    
int i=1;
int j;
printf("enter number to get it's table\n");// multiplication table
scanf("%d",&j);
do {
    printf("%dx%d=%d\n" ,j,i , j*i);
    i=i+1;
} while(i<=10);
return 0;   
}  