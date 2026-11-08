#include <iostream>

using namespace std;

int countDivisors(int a) {
    if (a < 0 ) {
        a *= -1;
    }
    int count = 0;

    for (int i = 0; i < a; i++) {
        if(a % i == 0) {
            count ++;
        }
    }
    return count;
}

int main() {

    int tri_number = 0;
    int i = 0;

    while (countDivisors(tri_number) < 150) {
        i++;
        tri_number += i;
    }

    cout << "The smallest triangular number with at least 150 divisors is T_" << i << " = " << tri_number << " with " << countDivisors(tri_number) << " divisors." << endl;;

    return 0;
}