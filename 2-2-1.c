#include<stdio.h>
#include<conio.h>

main()
{
    const  float pi=3.14;
    float r,area;
    clrscr();
    printf("enter radius:");
    scanf("%f,&r");
    area= pi*r*r;
    printf("area of cicle: %.2f",area);
    getch();
}