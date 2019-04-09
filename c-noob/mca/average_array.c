#include<stdio.h>
#define ROWS 2
#define COLUMNS 4

void main() {
	int fruits[ROWS][COLUMNS];
	int apples_price = 0;
	int oranges_price = 0;

	for (int i=0; i<ROWS; i++) {
		for (int j=0; j<COLUMNS; j++) {
			scanf("%d",&fruits[i][j]);
		}
	}
	
	for (int i=0; i<ROWS; i++) {
		for (int j=0; j<COLUMNS; j++) {
			if (i == 0)
				apples_price = apples_price + fruits[i][j];
			if (i == 1)
				oranges_price = oranges_price + fruits[i][j];
		}
	}

	printf("Total price of Apples is %d.\n", apples_price);
	printf("Total price of Oranges is %d.\n", oranges_price);

	printf("Average price of Apples is %f.\n", ((float)apples_price/COLUMNS));
	printf("Average price of Oranges is %f.\n", ((float)oranges_price/COLUMNS));
}
