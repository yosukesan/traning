
typedef struct data
{
	int value;
} data_t;

typedef struct binary_tree
{
	data_t data;	
	struct binary_tree* right;
	struct binary_tree* left;
	void (*insert)(struct binary_tree** tree, const data_t data);
	void (*print)(struct binary_tree** tree);
} binary_tree_t;

void insert(struct binary_tree** tree, const data_t data);
void print(struct binary_tree** tree);
