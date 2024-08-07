#include<stdio.h>
int main(void)
{
	int code,qty;
	float price,amt,totalAmt,cash,change;
	char addAnother;
	
	
	
		printf("=================Thiwanka Book Shop=================\n");
		printf("Date :2023-02-12\n");
		printf("Time :11.44\n");
		printf("=====================================================\n");
		printf("[1]CR book\t\tLKR400.00\n");
		printf("[2]Pen\t\t\tLKR40.00\n");
		printf("[3]Pencil\t\tLKR30.00\n"); // select
		printf("[4]Eraser\t\tLKR80.00\n");
		printf("[5]Glue\t\t\tLKR250.00\n");
		printf("[6]Pencil box\t\tLKR1000.00\n");
		printf("[7]Lunch box\t\tLKR1500.00\n");
		printf("[8]Scissor\t\tLKR120.00\n");
		printf("[9]Chalk\t\tLKR20.00\n");
		printf("[10]Marker pen\t\tLKR100.00\n");
	do	
	{
		
		printf("\nEnter item code :");
		scanf("%d",&code); //3
		
		printf("\nEnter quantity :");
		scanf("%d",&qty); //2
		
		switch(code)//3
		{
			case 1:price=400.00;
				   break;
			case 2:price=40.00;
				   break;
			case 3:price=30.00; // select
				   break;
			case 4:price=80.00;
				   break;
			case 5:price=250.00;
				   break;
			case 6:price=1000.00;
				   break;
			case 7:price=1500.00;
				   break;
			case 8:price=120.00;
				   break;
			case 9:price=20.00;
				   break;
			case 10:price=100.00;
				    break;	
		}
		amt=price*qty;//60
		printf("\nAmount :%.2f",amt);
		
		totalAmt=totalAmt+amt;//60
		printf("\nTotal Amount :%.2f",totalAmt);
		
		printf("\nAdd another order(y/n)?\n");
		addAnother=getche();	
	}while(addAnother=='y'||addAnother=='Y');
	
	do
	{
		printf("\nCash tendered :");
		scanf("%f",&cash);
	}while(cash<totalAmt);
	change=cash-totalAmt;
	printf("\nchange :%.2f",change);
	printf("\n\n=============Thank you come again=====================");
	return 0;
}