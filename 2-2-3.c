#include<stdio.h>
#include<conio.h>
#define half 0.5
main()
{
    float b,h,area;
    clrscr();
    printf("enter the base :");
    scanf("%f",&b);
    printf("enter the hight :");
    scanf("%f",&h);
    area =half*b*h;
    printf("area of triangle :%f",area);
    getch();
}