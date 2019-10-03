#include <stdio.h>

typedef struct work_item_t {
	double rate;
	double time;
} work_item_t;

typedef struct client_t {
	double total_due;
	int num_work_item;
	work_item_t work_item[10];
} client_t;


void print_main_menu()
{
	printf("1. Add Client\n2. Add Work Item\n3. Start/Stop timer 4. Exit\n");
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
	} while (choice != 4);

	return 0;
}