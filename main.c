#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "fast_sqrt.h"
#include "macros.h"

static const int TEST_COUNT = 64 * 1000 * 1000;

float fake_random(int seed) {
    return seed + 0.0004;
}

int main(void) {
    MEASURE_ELAPSED_TIME("fast", {
        for (int i = 0; i < TEST_COUNT; i++) {
            volatile double val = fast_sqrt(fake_random(i));
        }
    });

    MEASURE_ELAPSED_TIME("libc", {
        for (int i = 0; i < TEST_COUNT; i++) {
            volatile double val = 1 / sqrt(fake_random(i));
        }
    });
}
