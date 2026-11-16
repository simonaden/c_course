# Exercise 4.3 – Sorting Numbers

Timing with `clock()` from `<ctime>` around the `BubbleSort(array,n)` call (compiled without optimisation, `g++ -O0`).

| N       | CPU time [s] |
|---------|--------------|
| 5 000   | 0.066 |
| 10 000  | 0.276 |
| 20 000  | 1.20  |
| 40 000  | 4.97  |
| 80 000  | 20.3  |
| 160 000 | 81.7  |

Plot (log-log): `plot.svg`

## a) Dependence on N
Doubling N increases the time by a factor of about 4 (0.28 → 1.20 → 4.97 → 20.3 → 81.7).
In the log-log plot the points lie on a straight line with slope 2, so t ∝ N², i.e. O(N²).
This is expected: BubbleSort has two nested loops over the N elements → ~N² comparisons.
Fit: t ≈ 3.2·10⁻⁹ s · N².

## b) Estimate for N = 1 000 000
t ≈ 3.2·10⁻⁹ s · (10⁶)² ≈ 3 200 s ≈ 53 minutes
(equivalently: 160 000 → 10⁶ is a factor 6.25, so time × 6.25² ≈ 39 → 81.7 s · 39 ≈ 3 200 s).

Note: the given `BubbleSort` loop (`for (int m=n; n>1; n--)`) always runs the inner loop up to the original `n`, so it does about N² instead of N²/2 comparisons – the scaling is the same.
