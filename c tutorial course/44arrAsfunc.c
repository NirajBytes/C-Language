#include<stdio.h>
void func1(int array[]){
    for (int i=0;i<4;i++){
        printf("the value at %d is %d\n",i,array[i]);

    }
    array[0]=1;
    // IMP
    //if you change any value here it gets reflected in main

}
int main() 
{
    int arr[]={133,24,35,47};
printf("the value at index 0 is %d\n",arr[0]);
func1(arr);
printf("the value at index 0 is %d\n",arr[0]);
    return 0;  
}