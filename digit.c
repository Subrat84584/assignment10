#include<stdio.h>
int digit(int);
int main()
{
	int num,s;
	printf("enter your number");
	scanf("%d",&num);
	s=digit(num);
	printf("yes i got the digit from this number:%d %d",s,num);
}
int digit(int num)
{
	int digit,rem;
	printf("enter your digit");
	scanf("%d",&digit);
	while(num)
	{
	    rem=num%10;
	    if(digit==rem)
	    return digit;
	    else
	    num=num/10;
    }


}
