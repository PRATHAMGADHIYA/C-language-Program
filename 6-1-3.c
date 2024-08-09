#include<stdio.h>

main()
{
	int p=1,s;
	
	printf("enter s :");
	scanf("%d",&s);

	while(p<=s)
	{
		printf("%d",p);
		p++;
	}
	 getch();
}