# Exercise 4.1 – Teaser

## a) What does the program do?
It takes `n` (1 ≤ n ≤ 1000) as command-line argument, creates `n` pseudo-random numbers
uniformly distributed in [1, 4] (`a + (b-a)*drand()` with `drand()` ∈ [0,1]) and prints them, one per line.

## b) What do you notice if you run it several times?
Every run prints exactly the same numbers. The generator is seeded with the fixed value
`srand(123456)`, and `rand()` is deterministic, so the same seed gives the same sequence.

## c) Can you change this behaviour?
Yes, seed with a changing value, e.g. the current time:

```cpp
#include <ctime>
srand(time(NULL));
```

Now every run (at least one second apart) gives different numbers. See `Teaser.cpp`.
(For reproducible tests a fixed seed is still useful.)
