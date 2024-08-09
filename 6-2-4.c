#include<stdio.h>

main()
{
       int n,i,p,a,b;
       
       n=0;
       i=1;
       printf("enter any number :");
       scanf("%d",&b);
       for(a=0;a<=b;a++)
       {
		printf("%d ",n);
		p=n+i;
		n=i;
		i=p;
       }
     return 0;
 }
