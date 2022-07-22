#include <stdio.h>

// This will be used to see how assembly code will represent C code
long mult2(long, long);

void multstore(long x, long y, long *dest) {
	long t = mult2(x, y);
	*dest = t;
}

