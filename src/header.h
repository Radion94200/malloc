#include <string.h>
#include <sys/mman.h>
#include <pthread.h>
#include <stdint.h>
#include <stddef.h>

/* Def of the array of size memory */
struct array{
	struct memory **page;
	int size_array;
};

/* Def of the Struct which is use for the Metadata */
struct metadata{
	int block_state;
	int block_size;
	struct metadata *next_block;
	struct metadata *prev_block;
};

/* Def of the funcs in the malloc.c */
void *malloc(size_t __attribute__((unused)) size);

void free(void __attribute__((unused)) *ptr);

void *realloc(void __attribute__((unused)) *ptr,
             size_t __attribute__((unused)) size);

void *calloc(size_t __attribute__((unused)) nmemb,
             size_t __attribute__((unused)) size);

/* Def of the useful_func */
unsigned mystrlen(char *string);
