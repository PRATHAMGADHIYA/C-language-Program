#include<stdio.h>
#include<conio.h>

main()
{
	float l,b,area;
	clrscr();
	printf("enter the lenth :");
	scanf("%f",&l);
	printf("enter the width :");
	scanf("%f",&b);
	area = l*b;
	printf("area of rectangle :%f",area);
	getch();
}