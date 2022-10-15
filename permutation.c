//8.arrangement one can make from n items and r selected at a time.
#include<stdio.h>
int combination(int,int);
int main()
{
	int n,r,d;
	printf("enter the value of N for no of items and R for selected at a time");
	scanf("%d %d",&n,&r);
	d=combination(n,r);
	printf("The permutation is: %d",d);
	return 0;
}
int combination(int n,int r)
{
    int i,fact=1,fact1=1,fact2=1;
	for(i=1;i<=n;i++)
	{
	     fact=fact*i;	
	}	
	for(i=1;i<=r;i++)
	{
	     fact1=fact1*i;	
	}	
	int totalfact=fact/fact1;
	return totalfact;
}
