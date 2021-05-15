#include<stdio.h>
#include<conio.h>
main()
{
char ch;
printf("enter the character");
scanf("%ch",&ch);
if  (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
{
printf("the given character is =:vowel %c",ch);
}
else
{
	printf("the given character is=:consonent %c",ch);
}
}
