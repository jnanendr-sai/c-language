#include<stdio.h>
int big(int a,int b,int c,int d){

if(a>b && a>c && a>d) 
return a;
else if (b>a && b>c && b>d)
return b;
else if(c>a && c>b && c>d)
return c;
else if(d>a && d>b && d>c)
return d;}
int main(){
	
	int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("%d",big(a,b,c,d));
    return 0;
}
