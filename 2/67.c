/* 11-27-2021 cgnj512
 * Return 1 when size of Int is 32. */

int int_size_is_32
() {
	// It should run on machines which
	// size of Int is at least 16
	int max_one = ~0;
	int base_8 = (1 << 8) - 1;
	int base_16 = (base_8 << 8) + base_8;
	int base_15 = (base_8 << 7) + (base_8 >> 1);
	int base_31 = (base_16 << 15) + base_15;
	int base_32 = (base_31 << 1) + 1;
	return (max_one - base_31 != 0) && (max_one - base_32 == 0);
}
