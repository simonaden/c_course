# Exercise 4.2 – Statistics

Program: `Statistics.cpp` (reads `num_vals` first, then the values; array via `new double[num_vals]`, freed with `delete[]`).

Test with 1000 numbers from the original Teaser (fixed seed):

```
$ ./Teaser 1000 > numbers.txt
$ (echo 1000; cat numbers.txt) | ./Statistics
mean   = 2.47315
stddev = 0.868445
```

## Expected values for uniform distribution in [1, 4]
- mean: (a+b)/2 = 2.5
- standard deviation: (b-a)/√12 = 3/√12 ≈ 0.866

Measured 2.473 and 0.868 agree well with the theory (deviation of the mean ≈ 1 %, as expected for a sample of 1000 values).
