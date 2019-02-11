
#include <stdio.h>

#include "data.h"
#include "hash.h"

int main()
{
	hash_t* hash;
	hash_t hash_f;
	data_t data;

	hash_f.insert = hash_insert;

	data.value = 14;
	hash_f.insert(&hash, data);

	data.value = 34;
	hash_f.insert(&hash, data);

	data.value = 4;
	hash_f.insert(&hash, data);

	hash_f.find = hash_find;
	data.value = 34;
	printf("%d\n", hash_f.find(&hash, data));

	data.value = 24;
	printf("%d\n", hash_f.find(&hash, data));
}
