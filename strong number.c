#include <stdio.h>
int main()
{
	int n,dig,sum=0,temp=' ',i,fact;
	printf("Enter the number");
	scanf("%d" ,&n);
	temp = n;
	while(n>0)
	{
	dig = n%10;
	fact = 1;
	for(i=1;i<=dig;i++)
	{
	fact = fact*i;}
	sum = sum + fact;
	n=n/10;
    }
    printf("%d\n",sum);
    if(sum == temp){
	printf("Strong number");
	}
	else
	{
	printf("Not a strong number");
	}
	return 0;
}
