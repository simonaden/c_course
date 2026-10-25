#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double m_pi = 3.14159265358979323846;

double calculateArea(double radius) {
    return 4 * m_pi * (radius * radius);
}

double calculateVolume(double radius) {
    return (4.0 / 3.0) * m_pi * (radius * radius * radius);
}

int main() {

    double userRadius;

    cout << "Please enter a value for radius: ";
    cin >> userRadius;

    double area = calculateArea(userRadius);
    double volume = calculateVolume(userRadius);
    
    cout << fixed << setprecision(2);
    cout << "The sphere with radius " << userRadius
        << " has volume of " << volume
        << " and a surface area of " << area << endl;

    return 0;
}