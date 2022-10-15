//first N natural number.
#include<stdio.h>
int natural(int);
int main()
{
	int n;
	printf("enter the value of n to see the N natural number");
	scanf("%d",&n);
	natural(n);
	return 0;
}
int natural(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("%d ",i);
	}
	return 0;
}
