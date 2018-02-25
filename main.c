#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "fast_rsqrt.h"
#include "macros.h"

static const int TEST_COUNT = 128 * 1000 * 1000;

int main(void) {
	volatile double val;

	MEASURE_ELAPSED_TIME("fast", {
		for (int i = 0; i < TEST_COUNT; i++) {
			val = fast_rsqrt(i);
		}
	});

	MEASURE_ELAPSED_TIME("libc", {
		for (int i = 0; i < TEST_COUNT; i++) {
			val = 1 / sqrt(i);
		}
	});

	return val == 0;
}

