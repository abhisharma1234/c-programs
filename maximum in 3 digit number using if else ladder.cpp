#include<stdio.h> 
main()
{
	int a,b,c,max;
	printf("enter the number");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b&&a>c)
	max=a; 
	else if(b>c)
	max=b;
	else
	max=c; 
	printf("the maximum number is=:%d",max);
}
