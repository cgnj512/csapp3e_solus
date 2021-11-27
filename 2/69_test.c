//0x8274a159
#include <stdio.h>
#include "69.c"

int main
(int argc, char** argv) {
	unsigned x = 0x8274A159;
	printf("%x\n", x);
	int i = 0, w = 32;
	while (i < w)
	{
		unsigned rotx = rotate_left(x, i);
		printf("%d\t:%x\n", i, rotx);
		i += (i == w - 4 ? 3 : 4);
	}
}
