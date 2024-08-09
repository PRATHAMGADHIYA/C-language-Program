#include<stdio.h>

main()
{
	int a,b;
	
	printf("Enter any number:");
	scanf("%d",&a);
	
	if(a<0)
	{
		printf("This number is Negative");
	}
	else if(a>0)
	{
		printf("This number is positive");
	}
    else
	{
		printf("This number is Neutral");	
	}
	return 0;
}
