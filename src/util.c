#include <types.h>

size_t cstrlen(const char *X) {
	const char *Y = X;
	while (*X) X++;
	return X - Y;
}

void copy_bytes(byte *X, const byte *Y, size_t x) {
	while (x--) *(X)++ = *(Y)++;
}

void set_bytes(byte *X, byte x, size_t y) {
	while (y--) *(X++) = x;
}
