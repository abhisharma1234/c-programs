#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c,max;
printf("enter the number");
scanf("%d%d%d",&a,&b,&c);
max=(a>b)?(a>c?a:c):(b>c?b:c);
printf("the maximum number is:= %d",max);
}
