#include<stdio.h>
int main()
{
	int a,b,sum,sub,mu1,idiv,mod;
	float fdiv;
	printf("Enter the value of a:=");
	scanf("%d",&a);
	printf("Enter the value of b:=");
	scanf("%d",&b);
	sum=a+b;
	sub=a-b;
    mu1=a*b;
	idiv=a/b;
	fdiv=(float)a/b;
	mod=a%b;
	printf("%d %d %d %d % 2f %d",sum,sub,mu1,idiv,fdiv,mod);
}
