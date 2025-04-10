#include<stdio.h>
int main() 
{
    int arr[] ={1,2,3,4,5,6,7,8};
    int* arrayptr= arr; // by making pointer array we can do pointerarithmatics
    arrayptr++;
    printf("1the value of first   element of array is %d\n", arr[0]);
    printf("2the adress of first  element of array is %d\n", arr);
    printf("3the adress of first  element of array is %d\n", &arr[0]);
 
    printf("4the value of second  element of array is %d\n", arr[1]);
    printf("5the adress of second element of array is %d\n", arr +1);
    printf("6the adress of second element of array is %d\n", &arr[1]);

    printf("7the value of third   element of array is %d\n", arr[2]);
    printf("8the adress of third  element of array is %d\n", &arr[2]);
    printf("9the adress of third  element of array is %d\n", arr+2);

// arr++ ; this line wil thow error bcause arr is constant 
//--------------------------------------------------------------------------------------//

    printf("10the value of first  element of array is %d\n", arr[0]);
    printf("11the value of first  element of array is %d\n", *(arr));
    printf("12the value of first  element of array is %d\n", *(&arr[0]));

    printf("13the value of second element of array is %d\n", arr[1]);
    printf("14the value of second element of array is %d\n", *(arr+1));
    printf("15the value of second element of array is %d\n", *(&arr[1]));

    printf("16the value of third  element of array is %d\n", arr[2]);
    printf("17the value of third  element of array is %d\n", *(arr+2));
    printf("18the value of third  element of array is %d\n", *((&arr[2])));


    return 0;  
}