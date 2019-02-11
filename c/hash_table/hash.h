
#include "data.h"
#include "linked_list.h"

#define HASH_KEY 8

typedef struct hash
{
	linked_list_t list[HASH_KEY];
	linked_list_t f;

	//void (*init)(struct hash** hash_list, const int key);
	void (*insert)(struct hash** hash_list, const data_t data);
	int (*find)(struct hash** hash_list, const data_t data);
} hash_t;

//void hash_init(struct hash** hash_list, const int key);
void hash_insert(struct hash** hash_list, const data_t data);
int hash_find(struct hash** hash_list, const data_t data);
