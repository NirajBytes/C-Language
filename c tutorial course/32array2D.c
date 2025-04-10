#include <stdio.h>    
int main(){   
/*     
    int marks[2][4] = {{12,45,76,98},{34,56,76,87}};
 for(int i =0; i<2  ;i++)
 {
 for (int j = 0; j < 4 ; j++)  //WAY TO PRINT 2D ARRAY
 {         
 
       printf("the value of %d, %d element of the array is %d\n", i,j,marks[i][j]);
 }                  
                   } */

                     int marks[2][4] = {{2, 2, 7, 9},{4, 6, 7, 8}};
 for(int i =0; i<2  ;i++)
 {
 for (int j = 0; j < 4 ; j++)
 {         
 printf("%d  ",marks[i] [j]);
 }   
 printf("\n");               
                   }
return 0;   
}  