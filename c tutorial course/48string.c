#include<stdio.h>
void printstr(char str[]){
    int i=0;
    while(str[i]!='\0'){
        
        printf("%c", str[i]);
        i++;
    }

}
int main() 
{
    // char str[]={'N','I','R','A','J','\0'};
    // char str[]="NIARJ BALPANDE";
    char str[90];
    gets(str);
    // printstr(str);
    puts(str);
    
    return 0;  
}