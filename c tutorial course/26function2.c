#include<stdio.h>
void printstar(int n); // with argument without return value
int main(){
    int n;
    printf("enter to get how many stars\n");
    scanf("%d" ,&n);
      printstar(n);
      return 0;
    
}

void printstar(int n) // with argument without return value
{
   for(int i=0 ;i < n ;i++){
    printf(" %c ",  '*' );
   }
}
