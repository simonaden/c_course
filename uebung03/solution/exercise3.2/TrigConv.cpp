#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159265358979323846;

double deg2rad(const double deg) {
    return deg * PI / 180.0;
}

double sine(const double x) {
    const double x2 = x * x;
    return x * (1.0 + x2 * (-1.0 / 6.0
              + x2 * ( 1.0 / 120.0
              + x2 * (-1.0 / 5040.0
              + x2 * ( 1.0 / 362880.0
              + x2 * (-1.0 / 39916800.0))))));
}

double cosine(const double x) {
    const double x2 = x * x;
    return 1.0 + x2 * (-1.0 / 2.0
              + x2 * ( 1.0 / 24.0
              + x2 * (-1.0 / 720.0
              + x2 * ( 1.0 / 40320.0
              + x2 * (-1.0 / 3628800.0)))));
}

void getUserInput(double &x) {
    char y;

    cout << "Do you want to enter degree [d] or radians [r]: ";
    cin >> y;

    if (y != 'r' && y != 'd') {
        while(true) {
            cout << "Please enter a single char [d, r]: ";
            cin >> y;

            if (y == 'r' || y == 'd') {
                break;
            }
        }
        cout << endl;
    }


    cout << "Enter the variable x in degree [0..360]: ";
    cin >> x; 

    if (y == 'd') {
        x = deg2rad(x);
    }
}

int main() {
    
    double x = 0.0;

    getUserInput(x);

    // calculate sin and cos
    cout << "Sine of x = " << x  << " degrees is " << sine(x) << endl;
    cout << "Sine of x = " << x << " with cmath is " << sin(x) << endl;
    
    cout << "Cosine of x = " << x << " degrees is " << cosine(x) << endl;
    cout << "Cosine of x = " << x << " with cmath is " << cos(x) << endl;

    return 0;
}