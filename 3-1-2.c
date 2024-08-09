#include<stdio.h>
#include<conio.h>
main()
{
    float  a,b;
    printf("enter a: ");
    scanf("%f",&a);
    printf("enter b: ");
    scanf("%f",&b);
    a=b;
    b=a;
    printf("a=%.2f\n",a);
    printf("b=%.2f\n",b);
    getch();
} 