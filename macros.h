#ifndef SQRT_BENCHMARK_MACROS_H
#define SQRT_BENCHMARK_MACROS_H

#include <time.h>

#define MEASURE_ELAPSED_TIME(name, ...) \
    { \
        clock_t _start = clock(); \
        \
        __VA_ARGS__ \
        \
        clock_t _end = clock(); \
        printf( \
            "%12s completed in %6fs\n", \
            name, \
            (float) (_end - _start) / CLOCKS_PER_SEC \
        ); \
    }


#endif //SQRT_BENCHMARK_MACROS_H
