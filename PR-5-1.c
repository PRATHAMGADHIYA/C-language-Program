#include<stdio.h.>
main()
{
	int n,i;
	printf("enter the array size :");
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++){
		printf("enter elements :");
		scanf("%d",a[i]);
	}
	printf("enter the elements :");
	for(i=1;i<n;i++)
	    {
		if(i<=0)
		{
			printf("%d",a[i]);
		}
	}
}
