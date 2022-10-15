//6.factorial of a number.
#include<stdio.h>
int factorial(int);
int main()
{
	int n,T;
	printf("enter the value of n to check the fact of n\n");
	scanf("%d",&n);
	T=factorial(n);
	printf("The factorial of these number is: %d",T);
}
int factorial(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
