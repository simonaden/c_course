#include <iostream>
#include <cmath>

using namespace std;

double mean(const double a[], int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) sum += a[i];
    return sum / n;
}

double stddev(const double a[], int n) {
    double mu = mean(a, n);
    double sum = 0.0;
    for (int i = 0; i < n; i++) sum += (a[i] - mu) * (a[i] - mu);
    return sqrt(sum / (n - 1));
}

int main() {
    int num_vals = 0;
    cerr << "Number of values: ";
    if (!(cin >> num_vals) || num_vals < 2) {
        cerr << "Need an integer num_vals >= 2" << endl;
        return 1;
    }

    double *values = new double[num_vals];
    for (int i = 0; i < num_vals; i++) {
        if (!(cin >> values[i])) {
            cerr << "Could not read value " << i << endl;
            delete[] values;
            return 1;
        }
    }

    cout << "mean   = " << mean(values, num_vals) << endl;
    cout << "stddev = " << stddev(values, num_vals) << endl;

    delete[] values;
    return 0;
}
