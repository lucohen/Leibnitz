#include <iostream>
#include <cmath>
#include <cfloat>
#include <iomanip>
using namespace std;

int main() {
  for (int i = 1; i <= 20; i++) {
  double pi = 0;
  for (int n = 0; n < pow(2,i); n++) {
    pi = pi + (pow(-1,n)/(2*n+1));
  }
  pi = 4*pi;

  cout << fixed << setprecision (DBL_DIG) << "PI: " << pi; 
  cout << fixed << setprecision (7) << "; n: " << int(pow(2,i)) << endl;
  }
}