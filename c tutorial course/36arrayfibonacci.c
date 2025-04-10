
#include<stdio.h>
int main(){
int n; 
 printf("enter  number upto you want to print fibonacci series \n");  
    scanf("%d",&n);
int array[100];
array[0]=0;
array[1]=1;
for(int i=2;i<n;i++){
array[i]=array[i-2]+array[i-1];
}
for(int j=0;j<=n;j++)
printf("%d ",array[j]);
return 0;
}