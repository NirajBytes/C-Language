#include <stdio.h>    
int main(){    
int a=76;
int* ptra = &a;
int* ptr2 = NULL;
printf("The Adress of pointer to a is %p\n",&ptra);  
printf("The Adress of  a  %p\n",&a);
printf("The Adress of a is %p\n",ptra);
printf("The vaue of a is %d\n",*ptra);//from this line we can change the value of a   
printf("The value of a is %d\n",a);     
printf("The Adress of pointer to a is %x\n",&ptra);   
printf("The value of pointer ptr2 is %p\n",ptr2);  
return 0;   
}  

/*
🔚 Final Thoughts
💡 What You’re Seeing:
ptra holds the address of a.

*ptra gives the value at that address.

&ptra is the address of the pointer variable itself.

%p → prints full address

%x → prints raw hex format

NULL → address 0 (ptr2 doesn't point anywhere)

*/