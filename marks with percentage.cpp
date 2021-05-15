#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d, sum,percent;
	printf("enter the value of a,b,c,d");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	sum=a+b+c+d;
	printf("total is ");
	percent=sum*100/400;
	printf("the percent is=:%d",percent);
	if(percent>75) 
	printf("the grade is =:a+");
	else if(percent>65)
	printf("the grade is=:b");
	else if(percent>=36)
	printf("the grade is=:c");
	else if(percent<36)
	printf("the grade is=:fail"); 
}
