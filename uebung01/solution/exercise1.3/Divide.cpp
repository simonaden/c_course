#include <iostream>

using namespace std; //Missing ';'

//return type int and return 0 at the end of the method
int main() {
  
  double a;
  double b; //Initialising int b

  // ask user to enter two numbers and store values in a and b
  cout << "Enter two numbers: ";
  cin >> a >> b;

  // calculate a divided by b and print out result
  double x = a/b;
  cout << a << " divided by " << b << " is equal to " << x << endl;
  
  double y,z;
  cout << "y = " << y << endl;

  return 0;
}
