#include<stdio.h>
#include<conio.h>
main()
{
	int sum,i,n;
	clrscr();
	i=1;
	sum=0;
	printf("enter the value of n=");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("the sum number from 1 to %d is=%d\n",n,sum);
		sum+=i;
		i++;
	}
	getch();
}
