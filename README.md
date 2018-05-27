# sqrt-benchmark [![Build Status](https://travis-ci.org/cengizIO/sqrt-benchmark.svg?branch=master)](https://travis-ci.org/cengizIO/sqrt-benchmark) [![Build status](https://ci.appveyor.com/api/projects/status/twjujjgy1nmtbuop?svg=true)](https://ci.appveyor.com/project/cengizIO/sqrt-benchmark)

Is `0x5f3759df` hack really that fast?

### gcc (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4
```
$ ./sqrt_benchmark
        fast completed in 2.340787s
        libc completed in 1.834573s
```

### Visual Studio 14 2015 - MSVC 19.0.24215.1
```
Debug\sqrt_benchmark.exe
        fast completed in 1.951000s
        libc completed in 2.377000s
```

### Conclusion
It depends
