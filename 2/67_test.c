#include <stdio.h>
#include "67.c"

int main
(int argc, char** argv) {
	int res = int_size_is_32();
	printf(res ? "Truly 32\n" : "Not 32\n");
}
