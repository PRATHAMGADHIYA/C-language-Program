#include<stdio.h>

main()
{
	int i,n=1;
   
    printf("enter number:");
    scanf("%d",&n);
    
    for(i=1;i<=10;i++)
    {
    	printf("%d * %d =%d\n",n,i,i*n);
    }
   return 0;
}

    
