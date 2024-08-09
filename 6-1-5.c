#include<stdio.h>

main()

{
	int i,n;
	
	printf("enter first year :");
	scanf("%d",&i);

	printf("enter secound year :");
	scanf("%d",&n);

	while(n>=i)
	{
		if(i%4==0)
		{
			printf("%d ",i);
		}
	i++;
	}
	getch();

}