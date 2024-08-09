#include<stdio.h>
#include<conio.h>

void main()

{


   float s,HRA,DA,TA,ans;

   clrscr();

   printf("Enter your base salary :");
   scanf("%f",&s);
   HRA = s*0.1;
   printf(" Your HRA  :%f",HRA);
   DA = HRA*0.05;
   printf("Your DA :%f",DA);
   TA = DA*0.08;
   printf("Your TA : %f",TA);
   ans = s+HRA+DA+TA;
   printf("Your Gross Salary :%f",ans);

   getch();
}


