
#define MAX_CLIENTS 10



typedef struct work_item_t {
	char name[128];
	double rate;
	double time;
} work_item_t;

typedef struct client_t {
	char name[128];
	double total_due;
	int num_work_item;
	work_item_t work_item[10];
} client_t;

typedef struct billables_t
{
	int num_client;
	client_t client[MAX_CLIENTS];
	// timers
} billables_t;

int add_client(const char *name);
void print_work_item(struct work_item_t *item);
void print_client_by_num(int num);
void print_client(client_t *c);