#include<stdio.h>
main()
{
	int a,b,total;
	printf("____Calculator____\n");
	printf("you have a addition\n");
	      scanf("%d%d",&a,&b);
    total=a+b;
	printf("total is :%d\n",total);
	printf("you have a substraction\n");
	      scanf("%d%d",&a,&b);
	total=a-b;
	printf("total is: %d\n",total);
	printf("you have a multiplication\n");
	      scanf("%d%d",&a,&b);
	total=a*b;
	printf("total is: %d\n",total);
	printf("you have a division\n");
	      scanf("%d%d",&a,&b);
	total=a/b;
	printf("total is: %d \n",total);
	printf("you have a modulo\n");
	      scanf("%d%d",&a,&b);
	total=a%b;
	printf("total is :%d\n",total);
}
