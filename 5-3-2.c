#include<stdio.h>
#define P printf
#define S scanf

main()
{
	int choice;
	
	P("Press 1 For English\n");
	P("Press 2 For Hindi\n");
	P("Press 3 For Gujarati\n");
	P("Press Your Language Number : ");
	S("%d",&choice);

	switch(choice)
	{

		case 1:
			P("\nYou Have Choose Language English\n");
			P("Press 1 For Internet Recharge\n");
			P("Press 2 For Top - Up Recharge\n");
			P("Press 3 For Special Recharge\n");
			P("Enter Your Choice :");
			S("%d",&choice);

			switch(choice)
			{
				case 1:
					P("\nYou Have Successfully Done Internet Recharge\n");
					break;
				case 2:

					P("\nYou Have Successfully Done Top - Up Recharge\n");

					break;
				case 3:

					P("\nYou Have Successfully Done Special Recharge\n");

					break;
			}
			break;

		case 2:
			P("\nYou Have Choose Language Hindi\n");
			P("Internet Recharge Ke Liye 1 Dabaiye\n");
			P("Top - Up Recharge Ke Liye 2 Dabaiye\n");
			P("Special Recharge Ke Liye 3 Dabaiye\n");
			P("Enter Your Choice :");
			S("%d",&choice);

			switch(choice)
			{
				case 1:

					P("\nAapne Safaltapurvak Internet Recharge Kar Liya Hai\n");

					break;
				case 2:

					P("\nAapne Safaltapurvak Top - Up Recharge Kar Liya Hai\n");

					break;
				case 3:

					P("\nAapne Safaltapurvak Special Recharge Kar Liya Hai\n");

					break;
			}
			break;

		case 3:
			P("\nYou Have Choose Language Gujarati\n");
			P("Internet Recharge Mate 1 Dabavo\n");
			P("Top - Up Recharge Mate 2 Dabavo\n");
			P("special Recharge Mate 3 Dabavo\n");
			P("Enter Your Choice:");
			S("%d",&choice);

			switch(choice)
			{
				case 1:

					P("\nTame Safaltapurvak Internet Recharge Karyu Che\n");

					break;
				case 2:

					P("\nTame Safaltapurvak Top - Up Recharge Karyu Che\n");

					break;
				case 3:

					P("\nTame Safaltapurvak Special Recharge Karyu Che\n");

					break;
			}
			break;

	}
	getch();
}