#include<stdio.h>
#include<stdlib.h>
 int main()
{
	int a,b,c,max;
	printf("enter the numbers");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(a<b))
	max=a;
	else if(b>c)
	max=b;
	else
	max=c;
	printf("maximum no. is %d",max);
	return 0;
}
