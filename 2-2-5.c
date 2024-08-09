 #include<stdio.h>
 #include<conio.h>
 #define pie 3.14
 main()
 {
     float r,area;
     clrscr();
     
printf("enter the radius :");
    scanf("%f" ,&r);
    area = 2*pie*r;
    printf("perimeter of the circle :%f",area);
    getch();
 }
