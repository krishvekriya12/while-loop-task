#include<stdio.h>
#include<conio.h>
main()
{
	int i=1,n;
	clrscr();
	printf("enter number of n=");
	scanf("%d",&n);
	while(n>=i)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
		}
		i++;
	}
	getch();
}