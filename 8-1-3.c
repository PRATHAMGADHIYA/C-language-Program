#include<stdio.h>
main()
{
	int p,sum = 0;
	printf("enter array size:");
	scanf("%d",&p);
	
	int a[p],b[p],c[p],i;
	for(i=0;i<=p;i++)
	{
		printf("Enter array A's elements:");
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=p;i++)
    {
    	printf("Enter array B's elements:");
        printf("enter b[%d]:",i);
        scanf("%d",&b[i]);
    }
    for(i=0;i<=p;i++)
    {
        c[i]=a[i]+b[i];
        printf("c[%d] :%d\n",i,c[i]);
    }
}

