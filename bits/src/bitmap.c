#include "../include/bitmap.h"

// data is an array of uint8_t and needs to be allocated in bitmap_create
//      and used in the remaining bitmap functions. You will use data for any bit operations and bit logic   
// bit_count the number of requested bits, set in bitmap_create from n_bits
// byte_count the total number of bytes the data contains, set in bitmap_create 
struct bitmap {
	uint8_t *data;
	size_t bit_count, byte_count;
};

bitmap_t *bitmap_create(size_t n_bits) {

	return NULL;
}

bool bitmap_set(bitmap_t *const bitmap, const size_t bit) {

	return false;
}

bool bitmap_reset(bitmap_t *const bitmap, const size_t bit) {

	return false;
}

bool bitmap_test(const bitmap_t *const bitmap, const size_t bit) {
	return false;
}

size_t bitmap_ffs(const bitmap_t *const bitmap) {

	return 0;
}

size_t bitmap_ffz(const bitmap_t *const bitmap) {

	return 0;
}

bool bitmap_destroy(bitmap_t *bitmap) {
	return false;
}
