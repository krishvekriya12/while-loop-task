#include<stdio.h>
#include<conio.h>
main()
{
	int n,fact=1;
	clrscr();
	printf("enter the value of n=");
	scanf("%d",&n);
	while(n>=1)
	{
		fact=n*fact;
		printf("factorial=%d",fact);
		n--;
	}
	getch();
}