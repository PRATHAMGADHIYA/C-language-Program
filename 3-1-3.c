#include<stdio.h>
#include<conio.h>
main()
{
    int  x,y,ans;
    clrscr();
    printf("enter the x =");
    scanf("%d",&x);
    printf("enter the y =");
    scanf("%d",&y);
    ans =(x*x)+(y*y)+(2*x*y);
    printf("(x*y)^2= %d",ans);
    getch();
} 
    