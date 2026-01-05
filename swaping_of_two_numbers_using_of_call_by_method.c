#include<stdio.h>
int swap(int x,int y)
{
	int temp;
	temp= x;
	x=y;
	y=temp;
	printf("call by value:x=%d,y=%d\n",x,y);
	
}
int main()
{
	int a=13,b=12;
	printf("before swapping:%d %d\n",a,b);
	swap(a,b);

	return 0;
}
