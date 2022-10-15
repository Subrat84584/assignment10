//3.even or odd number
#include<stdio.h>
int even(int);
int main()
{
	int x,s;
	printf("enter your number");
	scanf("%d",&x);
	s=even(x);
	if(s==1)
	printf("This is even");
	else
	printf("This is odd");
	return 0;
}
int even(int x)
{
	if(x%2==0)
	return 1;
	else
	return 0;
}
