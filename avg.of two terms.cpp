#define avg(a,b) (a+b)/2.0
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter marks of first subject:=");
	scanf("%d",&a);
	printf("enter thr marks of second subject:=");
	scanf("%d",&b);
	printf("%f",avg(a,b));
}
