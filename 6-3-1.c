#include<stdio.h>

main()
{
	int i,n,sum=0;
	
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
		printf("sum of number %d : %d",n,sum);
	return 0;

}
