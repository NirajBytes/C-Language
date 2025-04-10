// 0 1 1 2 3 5 8 13 21 34 is fibonacci seriesS
#include <stdio.h>
int fib(int n){
      if(n==0 || n==1)
      {
            return n;
      }
      else{
            return fib(n-2)+fib(n-1);
      }
      
}

int main(){ 
      int n,j;
      printf("enter  number upto you want to print fibonacci series \n");
      scanf("%d",&j);
for(n=0;n<j;n++)
printf("%d ",fib(n));

      return 0;
} 
 