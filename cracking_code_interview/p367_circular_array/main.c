
#define CARRAY_SUCCESS (0)
#define CARRAY_FAILURE (1)

#include <stdlib.h>
#include <stdio.h>

typedef struct data
{
    int value;
} data_t;

typedef struct carray
{
    data_t* value;
    size_t length;
    int (*new)(struct carray* arr, const size_t length);
    void (*add)(struct carray* arr, const size_t index, const data_t val);
} carray_t;


int carray_new(carray_t* arr, const size_t length);
void carray_add(carray_t* arr, const size_t index, const data_t val);

// crray.c
int carray_new(carray_t* arr, const size_t length)
{
    arr->value = (data_t*)malloc(sizeof(length)); 
    arr->length = length;
    return (arr->value) ? CARRAY_SUCCESS : CARRAY_FAILURE;
}

void carray_add(carray_t* arr, const size_t index, const data_t val)
{
    if (arr->length >= index)
        arr->value[index] = val;
    else
        arr->value[index % arr->length] = val;
}

// main.c
int main()
{
    carray_t arr;
    carray_t farr;

    farr.new = carray_new; 
    if (CARRAY_SUCCESS != farr.new(&arr, 4))
    {
        fprintf(stderr, "Error: %s %d\n", __FUNCTION__, __LINE__ );
    }

    data_t d;

    farr.add = carray_add;

    d.value = 100;
    farr.add(&arr, 1, d); 

    d.value = 600;
    farr.add(&arr, 6, d); 

    return 0;
}

