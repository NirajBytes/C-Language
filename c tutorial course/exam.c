#include<stdio.h>
int main() 
{
    int a[3][3],b[3][3],i,j;
    printf("enter the element of matrix \n");
    for(int i=0; i<3 ;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);

        }
    }
printf("enter matrix  is \n");
    for(int i=0; i<3 ;i++){
        for(int j=0;j<3;j++){
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<3 ;i++){
        for(int j=0;j<3;j++){
            b[i][j]=a[j][i];
        }
        
    }
    printf("transpose matrix  is \n");
    for(int i=0; i<3 ;i++){
        for(int j=0;j<3;j++){
            printf(" %d ",b[i][j]);
        }
        printf("\n");
    }

    return 0;  
}