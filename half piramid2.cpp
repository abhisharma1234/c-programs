#include<stdio.h>
main()
{
	int n,i,j;
	printf("enter thenumber of rows");
	scanf("%d",n);
	for(i=0;i<=n;i++)
{
	for(j=1;j<=i;j++)
	printf("%d",'*');
}
}
