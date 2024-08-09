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
    ans =(x*x)+(y*y)+(3*x*y);
    printf("(x*y)^3= %d",ans);
    getch();
} 