#include <stdio.h>    
int main(){
    int n;    
   int a=0;
int  b=1;
 printf("enter  number upto you want to print fibonacci series \n");
    scanf("%d",&n);
    printf("%d  %d ",a,b);
     for(int i=2;i<n;i++){
    
    int c=a+b;
    a=b;
    b=c;
    printf("%d ",c);
   }
return 0;   
}  