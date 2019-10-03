#include <stdio.h>
#include "accounting_timer.h"


void print_main_menu()
{
	printf("1. Add Client\n2. Add Work Item\n3. Start/Stop timer\n4. Exit\n");
}

int get_number(int min, int max)
{
	printf("Please enter your choice (%d-%d): ", min,max);
	int x;
	do {
		scanf("%d", &x);
		if (x > max || x < min) {
			printf("Please enter a number between %d and %d: ", min, max);
		}
	} while(x > max || x < min);
	return x;
}


int main()
{
	int choice;
	do {	
		print_main_menu();
		choice = get_number(1, 4);
		switch(choice) {
			case 1:
				add_client("Test");
				break;
			case 2:
				print_client_by_num(0);
				break;
		}
	} while (choice != 4);

	return 0;
}