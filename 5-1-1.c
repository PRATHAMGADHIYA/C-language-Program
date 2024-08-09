#include<stdio.h>
#include<conio.h>
main()
{
    int a,b;
    
    printf("Enter a value of the first number:");
    scanf("%d",&a);
    printf("Enter a value of the second number:");
    scanf("%d",&b);

    if(a>b)
    {
        printf("the maximum value is %d");
    }
    
    else
    {
    	 
    	  printf("the minimum value is %d");
	}
    return 0;
}
