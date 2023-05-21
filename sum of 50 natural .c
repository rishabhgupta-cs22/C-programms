#include<stdio.h>
main()
{
	int n,sum=0,i=0;
	printf("enetr the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum= sum + i;
	}
		printf("sum=%d",sum);
}
