#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e,n;
	scanf("%d",&n);
	a=n%10;
	n=n/10;
	b=n%10;
	n=n/10;
	c=n%10;
	n=n/10;
	d=n%10;
	n=n/10;
	e=a+b+c+d;
	printf("%d",e);
}	

