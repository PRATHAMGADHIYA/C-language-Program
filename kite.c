#include<stdio.h>
#define P printf
int main()
{
	  int i,j,s;
	  
				for(i=1;i<=5;i++)
			{
	  	for(s=1;s<=5-i;s++)
				{
	  		P(" ");
				}
				for(j=i;j>=1;j--)
				{
					P("%d",j);
				}
				for(j=2;j<=i;j++)
				{
					P("%d",j);
				}
				P("\n");
			}
			
			
			
			
			
				for(i=5;i>=1;i--)
			{
	  	for(s=1;s<=5-i;s++)
				{
	  		P(" ");
				}
				for(j=i;j>=1;j--)
				{
					P("%d",j);
				}
				for(j=2;j<=i;j++)
				{
				P("%d",j);
				}
				P("\n");
			}
  			P("   212\n");
   		P("  32123");
			P("\n");
		}
	
		

