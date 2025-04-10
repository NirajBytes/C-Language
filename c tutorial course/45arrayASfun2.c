#include<stdio.h>
void func2(int* ptr){
 for (int i=0;i<4;i++){
        // printf("the value at %d is %d\n",i,ptr[i]);  method 1
        printf("the value at %d is %d\n",i,*(ptr+i)); // method 2

    }
    *(ptr + 2)= 5755;
}
int main() 
{
  int arr[] = {23,4,76,3};
func2(arr);
func2(arr);

    return 0;  
}