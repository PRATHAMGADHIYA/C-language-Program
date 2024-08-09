#include<stdio.h>

main()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{
	   (i==1 || i==3)
		? printf("*****")
		: printf("*   *");

		printf("\n");
	}
}
