#include<stdio.h>
main()
{
	int a,b,c,max;
	scanf("%d%d%d",&a,&b,&c);
	max=((a>b)?((a>c)?a:c:(b>c)?b:c);
	printf("maximum is %d ",max);
}
