#include<stdio.h>
int main(int argc, char *argv[])
{
	char ch;
	printf("You can do the following conversions\n");
	printf("Press A for km to mile conversion\nPress B for inch to foot conversion\nPress C for cm to inch conversion\nPress D for pound to kg conversion\nPress E for inches to metre conversion\nPress Q to quit out of conversions\n");
	for(int i = 1;;i++)
	{
		printf("Enter your choice\t");
		scanf("\n");
		scanf("%c",&ch);
		
		if(ch=='A' || ch == 'a')
		{
			printf("Enter the value in km:\t");
			float km;
			scanf("%f",&km);
			printf("Your value in mile is %f\n",km * 0.621);
		}
		else if(ch=='B' || ch == 'b')
		{
			printf("Enter the value in inches:\t");
			float inch;
			scanf("%f",&inch);
			printf("Your value in feet is %f\n",(float)(inch/12));
		}
		else if(ch=='C' || ch == 'c')
		{
			printf("Enter the value in cm:\t");
			float cm;
			scanf("%f",&cm);
			printf("Your value in inches is %f\n",cm * 0.394);
		}
		else if(ch=='D' || ch == 'd')
		{
			printf("Enter the value in pound:\t");
			float pound;
			scanf("%f",&pound);
			printf("Your value in kg is %f\n",pound * 0.454);
		}
		else if(ch=='E' || ch == 'e')
		{
			printf("Enter the value in inches:\t");
			float inch;
			scanf("%f",&inch);
			printf("Your value in metres is %f\n",inch * 0.0254);
		}
		else if(ch=='Q' || ch == 'q')
		{
			printf("Are you sure you want to quit?\n");
			printf("Press Y to confirm and any other button to cancel\n");
			char newc;
			scanf("\n");
			scanf("%c",&newc);
			if(newc=='Y' || newc=='y')
			{
				printf("You have quit out of conversions\n");
				break;
			}
			else
			printf("You have not quit\nYou may continue\n");
		}
		else
		{
			printf("You have entered a wrong character\n");
			printf("Please read above instructions and try again\n");
		}
	}
        return 0;
}
