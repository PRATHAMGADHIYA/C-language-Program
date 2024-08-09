#include<stdio.h>

main()
{
	int a,b=1;

	printf("enter any number: ");
	scanf("%d",&a);
	do
	{
		if(a%2==0)
		{
			printf("%d",a);
		}
		a--;
	}
	while(a>=b);
	
	return 0;
}
