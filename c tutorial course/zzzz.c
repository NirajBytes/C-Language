#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b,c,x,y,z;
	    scanf("%d%d%d",&a,&b,&c);
	    x=a+b;
	    y=b+c;
	    z=c+a;
	   if (c>x){
        printf("yes\n");

    }
    else if(a>y){
        printf("yes\n");
    }
    else if (b>z){
    printf("yes\n");
    }
else {
    printf("no");
}
	return 0;
}}


