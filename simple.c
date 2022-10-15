//calculate the simple interest.
#include<stdio.h>
float simple(float,float,float);
int main()
{
	float p,t,r;
	float intrest;
	printf("enter the value of principle,time and rate of intrest");
	scanf("%f %f %f",&p,&t,&r);
	intrest=simple(p,t,r);
	printf("The simple intrest is:%f",intrest);
}
	float simple(float p,float t,float r)
	{
		float si;
		si=(p*t*r)/100;
		return si;
	}

