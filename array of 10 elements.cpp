#include<stdio.h>
int main()
{
	int a[10],i;
		printf("enter the number");
		scanf("%d",&i);
		for(i=0;i<=9;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<=9;i++)
		{
			a[i]=a[i]+5;
		}
		for(i=0;i<=9;i++)
		{
			printf("%d\n",a[i]);
		}
}
