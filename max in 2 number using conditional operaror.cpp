#include<stdio.h>
int main()
{
	int a,b,max;
	printf("enter the value  of a and b :=");
	scanf("%d%d",&a,&b);
    max=(a>b)?a:b;
 printf("max between %d and %d is%d",a,b,max);	
}
