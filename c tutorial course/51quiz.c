#include<stdio.h>
void swap(int* x,int* y){
    int f;
    f=*x;
    *x=*y;
    *y=f;
    return;
}
void swapi(int arr[],int n)
{
for(int i=0;i<n/2;i++){
    //  int t=arr[i];
    // arr[i]=arr[n-1-i];
    // arr[n-1-i]=t;
    swap(&arr[i],&arr[n-1-i]);


}
}

int main() 
{
 int arr[]={1,2,3,56,78};
 swapi(arr,5);
 for(int i=0;i<5;i++){

 printf("%d ",arr [i]);
 }

    return 0;  
}