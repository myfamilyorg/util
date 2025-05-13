#ifndef _UTIL_H__
#define _UTIL_H__

#include <types.h>

size_t cstrlen(const char *X);
void copy_bytes(byte *X, const byte *Y, size_t x);
void set_bytes(byte *X, byte x, size_t y);

#endif	// _UTIL_H__
