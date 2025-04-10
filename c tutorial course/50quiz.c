#include<stdio.h>
#include<string.h>
int main() 
{
    char s1[]="DHIRAJ ";
    char s2[]=" NIRAJ";
   char s3[]="IS BROTHER OF ";
   
   
puts(strcat(strcat(s1,s3),s2));

    return 0;  
}