#include <stdio.h>
#include "accounting_timer.h"


static billables_t billables;

int add_client(const char *name)
{
	if (billables.num_client == MAX_CLIENTS) {
		return -1;
	}
	client_t *c = &billables.client[billables.num_client];
	snprintf(c->name, 128, "%s", name);
	c->total_due = 0.0f;
	c->num_work_item = 0;
}

void print_work_item(work_item_t *item)
{
	printf("Name: %s, Number of hours: %d, Rate: %d\n", item->name, item->time, item->rate);
}

void print_client_by_num(int num)
{
	print_client(&billables.client[num]);
}

void print_client(client_t *c)
{
	printf("Client %s:\n", c->name);
	printf("	Number of total work items: %d\n", c->num_work_item);
	int i;
	for (i = 0; i < c->num_work_item; ++i) {
		printf("		Work Item %d: ");
		print_work_item(&c->work_item[i]);
	}
}
