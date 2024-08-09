#include<stdio.h>
#define P printf
#define S scanf
main()
{
	char alphabet= 'a';
	
	do
	{
		
		P("%c",alphabet);
		alphabet+=4;
		
	}while(alphabet<='z');
	    
    return 0;
}

