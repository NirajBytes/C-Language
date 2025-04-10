#include<stdio.h>
int main() 
{
    int a[2][2],b[2][2],result[2][2],int sum;
    printf("enter first matrix\n");
    for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
        scanf("%d",&a[i][j]);
            }
    }
       printf("first matrix\n");
      for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
        printf(" %d ",a[i][j]);
            }
            printf("\n");
                  }
                   printf("enter second matrix\n");
    for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
        scanf("%d",&a[i][j]);
            }
    }
       printf("\nsecond matrix\n");
      for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
        printf(" %d ",a[i][j]);
            }
            printf("\n");
                  }
                   printf("enter first matrix\n");
    for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
        scanf("%d",&a[i][j]);
            }
    }
       printf("result matrix\n");
      for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
        for(int k=0;k<2;k++){
         sum += a[i][k]+b[k][j];
        }
        result[i][j]=sum;
        sum=0;
            }
            printf("\n");
                  }
                   printf("enter first matrix\n");
    for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
        scanf("%d",&a[i][j]);
            }
    }
       printf("\nresult matrix\n");
      for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
        printf(" %d ",result[i][j]);
            }
            printf("\n");
                  }
    return 0;  
}