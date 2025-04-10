/*#include<stdio.h>
int starpattern(int rows){
for(int i=0;i<rows;i++){
    for(int j=0;j<=i;j++){
        printf("*");
    }printf("\n");
}
}
int reverse_starpattern(int rows){
for(int i=0;i<rows;i++){
    for(int j=rows;j>i;j--){
        printf("*");
    }printf("\n");
}
}

int main() 
{int rows,pattern; 

    printf("how many rows you want ?");
    scanf("%d",&rows);
    printf("Enter 1 for starpattern\nEnter 2 for reverse_starpattern");
    scanf("%d",&pattern);
    switch(pattern){
    case 1 : starpattern(rows);
 break;
 case 2 : reverse_starpattern(rows);  
 break;
 default :  printf("enter 1 or 2 only");
    }
    return 0;  
}*/

#include<stdio.h>
int starpattern(int rows){
for(int i=1;i<=rows;i++){
    for(int j=1;j<=i;j++){
        printf("*");
    }printf("\n");
}
}
int reverse_starpattern(int rows){
for(int i=1;i<=rows;i++){
    for(int j=rows;j>=i;j--){
        printf("*");
    }printf("\n");
}
}

int main() 
{int rows,pattern; 

    printf("Enter Number Of Rows You Want ---->	");
    scanf("%d",&rows);
    printf("Enter 1 for starpattern\nEnter 2 for reverse_starpattern\n");
    scanf("%d",&pattern);
    switch(pattern){
    case 1 : starpattern(rows);
 break;
 case 2 : reverse_starpattern(rows);  
 break;
 default :  printf("enter 1 or 2 only");
    }
    return 0;  
}






