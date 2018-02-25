#ifndef SQRT_BENCHMARK_FAST_RSQRT_H
#define SQRT_BENCHMARK_FAST_RSQRT_H

/**
 * Function taken from:
 *   https://en.wikipedia.org/wiki/Fast_inverse_square_root
 */
#define SQRT_MAGIC_F 0x5f3759df

float fast_rsqrt(const float n) {
	long i;
	float y;
	const float x2 = n * 0.5F;
	const float threehalfs = 1.5F;

	y = n;
	i = *(long *)&y;
	i = SQRT_MAGIC_F - (i >> 1);
	y = *(float *)&i;
	y = y * (threehalfs - (x2 * y * y));

	return y;
}


#endif //SQRT_BENCHMARK_FAST_RSQRT_H
