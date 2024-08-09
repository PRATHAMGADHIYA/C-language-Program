#include<stdio.h>

#define P printf
#define S scanf
main()
{
	int n,a=0;
	

	P("enter n : ");
	S("%d",&n);

	while(n!=0)
	{
		n=n/10;
		a++;
	}
	P("the number of digit :%d",a);

	return 0;
}



