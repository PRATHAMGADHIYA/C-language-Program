#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
main()
{
	int choice,qty,bill;
	
	P("enter...\n");
	P("1)pizza\n");
	P("2)burger\n");
	P("3)cold drinks\n");
	P("enter your choice:\n");
	S("%d",&choice);

	switch(choice)
	{
		case 1:
			bill+=950*2;
			P("your order is pizza:");
			P("1)sicilian pizza\t950\n");
			P("2)pepperoni pizza\t700\n");
			P("3)aussie pizza\t870\n");
			break;
			
		case 2:
			bill+=450*2;
			P("your order is burger:\n");
			P("1)luger burger\t350\n");
			P("2)le pigeon burger\t450\n");
			P("3)the company burger\t500\n");
			break;
		case 3:
			
			bill+=200*2;
			P("your order is cold drinks:\n");
			P("1)coca cola\t100\n");
			P("2)red bull\t200\n");
			break;
	     }
     getch();
}
