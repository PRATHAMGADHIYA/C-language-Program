#include<stdio.h>

main()

{
	int n;
	
	printf("enter any number :");
	scanf("%d",&n);
	int i=n;
	while(i<=n)
	{
		if(i%2==1)
		{
			printf("%d ",i);
		}
		i--;
	}
	getch();

}
