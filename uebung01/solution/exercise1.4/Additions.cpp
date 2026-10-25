#include <iostream>

using namespace std;

int main() {

  int      N=10;
  unsigned s=12345;
  int      count=0;

  cout << "Solve the following addition problems and enter the result:" << endl;
  for (int i=0; i<N; i++) {

     // generate two numbers a and b for addition
     s = 1664525*s + 1013904223;
     int a = 1+ s%20;
     s = 1664525*s + 1013904223;
     int b = 1+ s%20;
     
     int ans;
     cout << a << " + " << b << " = ";
     cin >> ans;

     if (a+b==ans) {
       count++;
     } else {
       count--;
     } 
  }

  cout << "You got " << count << " points of " << N << endl;

}
