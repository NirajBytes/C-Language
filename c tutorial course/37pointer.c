#include <stdio.h>    
int main(){    
int a=76;
int* ptra = &a;
int* ptr2 = NULL;
printf("The Adress of pointer to a is %p\n",&ptra);  
printf("The Adress of  a  %p\n",&a);
printf("The Adress of a is %p\n",ptra);
printf("The vaue of a is %d\n",*ptra);  
printf("The value of a is %d\n",a);     
printf("The Adress of pointer to a is %x\n",&ptra);   
printf("The value of pointer ptr2 is %p\n",ptr2);  
return 0;   
}  