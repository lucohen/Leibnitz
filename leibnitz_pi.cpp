#include <iostream>
#include <cmath>
#include <cfloat>
#include <iomanip>
using namespace std;

int main() {
  double pi;
  cout << "Please enter a non-negative integer upper limit of summation for the Leibnitz formula for computing pi: " << endl;
int input;
  cin >> input;
  for (int n = 0; n<input; n++) {
    pi = pi + (pow(-1,n)/(2*n+1));
  }
  pi = 4*pi;

  cout << fixed << setprecision (DBL_DIG) << "PI (approx): " << pi << "; n: " << input << endl;
 cout << "PI (actual): " << "3.141592653589793" << endl;

  cout << "Decimal digits of precision: " << DBL_DIG << endl;
  cout << "Number of base 2 mantissa digits of double precision floating point value: "
  << DBL_MANT_DIG << endl;
  cout << "Next representable number from 3.141592653589793: "
  << nextafter(3.141592653589793, 3.14) << endl;
}