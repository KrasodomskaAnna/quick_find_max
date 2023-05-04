#include <stdio.h>
#include <xmmintrin.h>

extern __m128 szybki_max(short int t1[], short int t2[]);

int main()
{
	short int val1[8] = { 1, -1, 2, -2, 3, -3, 4, -4 };
	short int val2[8] = { -4, -3, 256, -1, 0, 1, 2, 3 };

	__m128 t1 = szybki_max(val1, val2);
	printf("%d, %d, %d, %d, %d, %d, %d, %d", t1.m128_i16[0], t1.m128_i16[1], t1.m128_i16[2], t1.m128_i16[3], t1.m128_i16[4], t1.m128_i16[5], t1.m128_i16[6], t1.m128_i16[7] );

	return 0;
}