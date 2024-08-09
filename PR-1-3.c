#include<stdio.h>
#include<conio.h>
 main()
 {
	int a,b,c,ans;
	clrscr();
	printf("Enter first angle of triangle : ");
	scanf("%d",&a);
	printf("Enter second angle of triangle : ");
	scanf("%d",&b);
	c = a+b;
	ans = 180-c;
	printf("Your third angle is : %d",ans);
	getch();
	}