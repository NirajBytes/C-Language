#include<stdio.h>
int main() 
{
    int arr[7]={6,4,9,24,56,12,45};
    int a=0;
    for(int i=0;i<6;i++){
        for(int j=0;j<(6-1-i);j++){
           if(arr[j]>arr[j+1])
           { int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            int a=1;
        }
    }
    if(a==0){
        break;
    }
    }

    for(int j=0;j<7;j++){
        printf(" %d ",arr[j]);
    }
    return 0;  
}