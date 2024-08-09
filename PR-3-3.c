#include<stdio.h>
#define P printf
#define S scanf

main()
{
       int n,a,F,D;
      
       P("enter n : ");
       S("%d",&n);
       D= n%10;

       while(n>=10)
       {
		n=n/10;
       }
       F=n;

       a=D + F;
       P("The First and last digit's sum :%d",a);

	return 0;
 }

