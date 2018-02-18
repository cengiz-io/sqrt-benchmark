#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "fast_sqrt.h"
#include "macros.h"

static const int TEST_COUNT = 4 * 1000 * 1000;
static const int MAX_NUMBER = 128 * 1000;

int main(void) {
    srand((unsigned int) time(NULL));

    MEASURE_ELAPSED_TIME("fast", {
        for (int i = 0; i < TEST_COUNT; i++) {
            volatile double val = fast_sqrt(rand() % MAX_NUMBER);
        }
    });

    MEASURE_ELAPSED_TIME("gnu", {
        for (int i = 0; i < TEST_COUNT; i++) {
            volatile double val = 1 / sqrt(rand() % MAX_NUMBER);
        }
    });
}
