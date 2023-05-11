#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	int i=1,n;
	printf("enter number=");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\t",i);
		i++;
	}
	getch();
}