/* 11-27-2021 cgnj512
 * Do rotating left shift. Assume 0 <= n < w.
 * Example when x = 0x8274A159 and w = 32
 * n = 20 ==> return 0x1598274A
 */

unsigned rotate_left
(unsigned x, int n) {
	size_t w = 32;
	unsigned left_num = x << n;
	unsigned right_num = x >> (w - n);
	// If n = 0, set right num to zero,
	unsigned mask = (~0) + (!n);
	right_num &= mask;
	return left_num + right_num;
}
