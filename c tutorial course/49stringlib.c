/*    C LIBRARY: <string.h>
Function                                         Use

strcat()                     This function is used to concatenate or combine two given strings

strlen()                     This function is used to show length of a string

strrev()                     This function is used to show reverse of a string

strcpy()                     This function is used to copy one string into another

strcmp()                     This function is used to compare two given strings

*/
#include<stdio.h>
#include<string.h>
int main() 
{
    char s1[]="jarin";
    char s2[]="jarihd";
    char s3[7];
    // puts(strcat(s1,s2));    combining strings
    printf("the length of s1 is %d\n",strlen(s1));
    printf("the length of s2 is %d\n",strlen(s2));
    printf("the reverse of s1 is :");
    puts(strrev(s1));
    printf("the reverse of s2 is :");
    puts(strrev(s2));
    //strcpy(s3 ,s1);
    // strcpy(s3 ,s2);
    strcpy(s3 ,(strcat(s1,s2)));
    puts(s3);
 printf("the strcmp for s1,s2 returned is %d\n",strcmp(s2,s1));   
    
    
    return 0;  
}