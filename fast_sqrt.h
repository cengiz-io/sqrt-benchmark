#ifndef SQRT_BENCHMARK_FAST_SQRT_H
#define SQRT_BENCHMARK_FAST_SQRT_H

/**
 * Function taken from:
 *   https://www.codeproject.com/Articles/69941/Best-Square-Root-Method-Algorithm-Function-Precisi
 */
#define SQRT_MAGIC_F 0x5f3759df

float fast_sqrt(const float x) {
    const float xhalf = 0.5f * x;

    union // get bits for floating value
    {
        float x;
        int i;
    } u;

    u.x = x;
    u.i = SQRT_MAGIC_F - (u.i >> 1);  // gives initial guess y0
    return x * u.x * (1.5f - xhalf * u.x * u.x);// Newton step, repeating increases accuracy
}


#endif //SQRT_BENCHMARK_FAST_SQRT_H
