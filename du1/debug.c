#include <stdio.h>
#include <stdlib.h>

#include "error.h"
#include "bitset.h"

int main()
{
	bitset_create(my_bitset, 100);

	bitset_setbit(my_bitset, 0, 1);
	bitset_setbit(my_bitset, 70, 1);
	bitset_setbit(my_bitset, 70, 0);
	bitset_setbit(my_bitset, 71, 1);

	printf("%ld, %lu, %lu, %lu\n\n", my_bitset[0], my_bitset[1], my_bitset[2], ULONG_MAX);

	bitset_alloc(my_bitset2, 150);
	printf("%ld, %ld, %ld, %ld\n\n", my_bitset2[0], my_bitset2[1], my_bitset2[2], my_bitset2[3]);

	printf("size1: %ld\nsize2: %ld\n", bitset_size(my_bitset), bitset_size(my_bitset2));

	bitset_free(my_bitset2);

	error_exit("nechyba\n");

	return 0;
}