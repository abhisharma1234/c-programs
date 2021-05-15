#include<stdio.h>
#include<conio.h>
int main()
{
	char a,b,c;
	printf("enter the value of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
		if(a>b)
	{
		if(a>c)
		{
			printf("the greater number%d",a);
		}
		else
		{
			printf("the geater number%d",c);
		}
	}
	else if(b>a)
	{
		if(b>c)
		{
			printf("the greater number%d",b);
		}
		else
		{
			printf("the greater number%d",c);
		}
	}
	else 
	{
		printf("the greater number%d",c);
	}
}
