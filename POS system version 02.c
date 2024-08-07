#include<stdio.h>
int main(void)
{
	int mNo,sNo,i,j;
	char itemCode[5];// {001,002,"","",""}
	char itemName[5]; // {Item 1,Item B 2,"","",""} itemName[1]="'
	float itemPrice[5];// {100,150,0,0,0}
	float total;
	char addAnother,add;
	
	// char saleItem[5]; => saleItem[0]="002	Item B 2	150"
	// next saleItem index 
	
	// next item index =0
	
	printf("===================Thiwanka book shop==================\n");
	printf("Date :2023-02-12\n");
	printf("Time :11.44a.m.\n");
	printf("=======================================================\n");
	
	printf("1.Sale\n");
	printf("2.Items\n");
	printf("3.Price\n");
	printf("========================================================\n");
	
	printf("Enter menu number :");
	scanf("%d",&mNo);
	
	if(mNo==1)
	{
		/*printf("[1]CR book\t\tLKR400.00\n");
		printf("[2]Pen\t\t\tLKR40.00\n");
		printf("[3]Pencil\t\tLKR30.00\n"); 
		printf("[4]Eraser\t\tLKR80.00\n");
		printf("[5]Glue\t\t\tLKR250.00\n");*/
		
		// Enter Item Code
		
		// lopp => find code index
		
	}
	else if(mNo==2)
	{
		printf("==== Sub Menu - Items =====\n");
		/*printf("[1]CR book\n");
		printf("[2]Pen\n");
		printf("[3]Pencil\n");
		printf("[4]Eraser\n");
		printf("[5]Glue\n");
		printf("===========================\n");*/
		
		// 001	Item 1
		
		printf("1.Add\n");
		printf("2.Edit\n");
		printf("3.Delete\n");
		printf("4.Exit\n");
		printf("===========================\n");
		
		printf("Enter your choice:\n");
		scanf("%d",&sNo);
		
		if(sNo==2)
		{
			do
			{
			printf("Enter item no :\n");
			scanf("%d",&i);
			
			printf("Enter new value :\n");
			scanf("%d",&j);
	
			price[i]=j;
			
			printf("\nAdd(y/n)?\n");
			add=getche();
			}while(add=='y'||add=='Y');
		}

		if(sNo==1)
		{
			do
			{
				printf("Enter the item no :\n");
				scanf("%d",&i);
				
				total=total+price[i];
				printf("total=%.2f\n",total);
				
			    printf("\nAdd another order(y/n)?\n");
				addAnother=getche();
			}while(addAnother=='y'||addAnother=='Y');
		}
	}
	

	return 0;
}