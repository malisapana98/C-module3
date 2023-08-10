#include<stdio.h>
main()
{
	float p,r,t,si;
	printf("enter the principle rate and time\n");
	scanf("%f%f%f",&p,&r,&t);
	si=p*r*t/100;
	printf("simple interest is %2lf",si);
}

