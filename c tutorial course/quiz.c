#include<stdio.h>

void solve(int n, int arr[]){
    int i=0,j=n-1;
while(i<j){
    if(arr[i]%2==0){
       i++;
    }else if(arr[j]%2==0){
        int t=arr[j];
        
       arr[j]=arr[i];
       j--;
       int d=arr[j];
       arr[j]=t;
       arr[i]=d;
       


    }
}
}

int main() 
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    solve(n,arr);
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    


    return 0;  
}