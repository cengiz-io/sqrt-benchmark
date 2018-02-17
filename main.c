#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "fast_sqrt.h"
#include "macros.h"

static const int TEST_COUNT = 4 * 1000 * 1000;
static const int MAX_NUMBER = 128 * 1000;

int main(void) {
    FILE *dev_null_ptr = fopen("/dev/null", "w");

    if (dev_null_ptr == NULL)
        return -69;

    srand((unsigned int) time(NULL));

    MEASURE_ELAPSED_TIME("fast", {
        for (int i = 1; i < TEST_COUNT; i++) {
            double val = fast_sqrt(rand() % MAX_NUMBER);
            fprintf(dev_null_ptr, "%f", val);
        }
    });

    MEASURE_ELAPSED_TIME("gnu", {
        for (int i = 1; i < TEST_COUNT; i++) {
            double val = 1 / sqrt(rand() % MAX_NUMBER);
            fprintf(dev_null_ptr, "%f", val);
        }
    });
}
