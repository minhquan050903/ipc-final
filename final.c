#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

struct	Date
{
	int month;
	int day;
	int year;
};
struct SingleSaleRecord
{
	int numberSold; 
	double salePrice;
	struct Date saleDate;
};
int getIntInRange(int min, int max)
{
	int value = 0;
	do
	{
		scanf("%d",&value);
		if (value < min || value > max)
		{
			printf("Enter a valid integer between %d and %d: ", min, max);
		}

	} while (value < min || value > max);
	return value;
}

int main(void)
{
	int flag ,selection=0;
	int i,k;
	double day8sum = 0.00, day9sum = 0.00;
	printf("****** Seneca Gardens ******\n");
	struct SingleSaleRecord tmp[5] = {
		{ 1 ,9.99 , { 9 , 8 , 2021} },
		{ 1 , 44.50 ,{ 9 , 8 , 2021 } },
		{ 12 , 3.99 ,{9 , 8 , 2021 } },
		{ 6 , 9.99 , {9 , 9 , 2021 }},
		{ 12 , 2.0 ,{ 9 , 9 , 2021 }}
	}; 
	
	do {
		flag = 0;
		printf("Select one of the following options:\n");
		printf("1-View All Sales\n");
		printf("2-View Sales By Product\n");
		printf("3-View Sales by Date sorted by revenue\n");
		printf("0-Exit\n");
		selection = getIntInRange(0, 3);
		if (selection == 1)
		{
			printf("A");

		}
		else if (selection == 2)
	{
			printf("B");
	}
		else if (selection == 3)
		{
			for (i = 0;i < 5;i++)
			{
				if (tmp[i].saleDate.day == 8)
				{
					day8sum += (tmp[i].salePrice*tmp[i].numberSold);
				}
			}
			for (k = 0;k < 5;k++)
			{
				if (tmp[k].saleDate.day == 9)
				{
					day9sum += (tmp[k].salePrice*tmp[k].numberSold);
				}
			}
			printf("REVENUE DAY MONTH YEAR\n");
			printf("%.2lf  08  %02d     %d\n", day8sum, tmp[0].saleDate.month, tmp[0].saleDate.year);
			printf("%.2lf   09  %02d     %d\n", day9sum, tmp[0].saleDate.month, tmp[0].saleDate.year);
		}
		else if (selection == 0)
		{
			flag = 1;
		}
		
	} while (flag == 0);
	printf("Good Bye");
	return 0;

}