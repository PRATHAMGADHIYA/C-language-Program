#include<stdio.h>
main()
{
	int p,sum = 0;
	printf("enter array size:");
	scanf("%d",&p);
	
	int a[p],i,avg;
	for(i=0;i<=p;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	avg = sum/p;
	printf("\naverage :%d\n",avg);
}

