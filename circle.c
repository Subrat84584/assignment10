//area of a circle
float area(float);
#include<stdio.h>
int main()
{
	int r;
	float s;
	printf("enter the value of radius");
	scanf("%d",&r);
	s=area(r);
	printf("area of circle is:%f",s);
	return 0;
}
float area(float rad)
{
	float t=3.14*rad*rad;
	return t;
}
