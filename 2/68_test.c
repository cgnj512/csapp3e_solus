#include <stdio.h>
#include "68.c"

int main
(int argc, char** argv) {
	int n = 0, w = 32;
	while (n < w)
	{
		n++;
		int x = lower_one_mask(n);
		printf("%d\t:%x\n", n, x);
	}
}
