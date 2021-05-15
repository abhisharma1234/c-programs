#include<stdio.h>
#include<conio.h>
main()
{

	a();
	b();
	a();
	c();
	
	getch();
	
}

a()
{
	printf("\nhello");
}

b()
{
	a();
	c(a());
}

c()
{
	printf("\nbye");
}
