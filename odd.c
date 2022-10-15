//first N odd number.
#include<stdio.h>
int natural(int);
int main()
{
	int n;
	printf("enter the value of n to see the N odd natural number");
	scanf("%d",&n);
	natural(n);
	return 0;
}
int natural(int n)
{
	int i;
	for(i=1;i<=n;i=i+2)
	{
		printf("%d ",i);
	}
	return 0;
}
