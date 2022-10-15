//10.write a function to print all prime factor of a given number.
#include<stdio.h>
int prime(int n);
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	prime(n);
	return 0;
}
int prime(int n)
{
	int i=2;
	for(i=2;n>1;i++)
	{
		while(n%i==0)
		{
			printf("%d ",i);
			n=n/i;
		}
	}
	return 0;
}
