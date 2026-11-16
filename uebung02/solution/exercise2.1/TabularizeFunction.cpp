#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double x_min = 0.0;
    double x_max = 0.0;
    int num_steps = 0;

    cout << "Enter a value for x_min: ";
    cin >> x_min;

    cout << "Enter a value for x_max: ";
    cin >> x_max;

    cout << "Enter a value for num_steps: ";
    cin >> num_steps;

    for (int i = 0; i < num_steps; i++) {
        double x = x_min + i * (x_max - x_min) / (num_steps - 1);
        double y = sin(1.5 * M_PI * x) * exp(-x * x / 2.0);
        cout << x << " " << y << endl;
    }

    return 0;
}