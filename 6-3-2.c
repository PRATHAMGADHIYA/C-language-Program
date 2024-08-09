#include<stdio.h>

main()
{
	int n,i,sum=1;

	printf("Enter the number  : ");
	scanf("%ld", &n);

	for(i=1; i<=n; i++)
	{
		sum*=i;
	}
	printf("The Factorial Number is:%d ",sum);
   
   return 0;
}

