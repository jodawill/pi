// Code written by Josh Williams
// jodawill@iuk.edu

// Uses the following fourier series for π:
// π^2/12 = 1/1 - 1/4 + 1/9 - 1/16 + 1/25...

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[]) {
 cout.precision(14);
 int iter;
 bool b = 1;
 cout << "Enter the number of iterations: ";
 cin >> iter;

 double pi = 0;

 for (double den = 1; den <= iter; den++) {
  if (b) {
   pi += 1 / (den * den);
  } else {
   pi -= 1 / (den * den);
  }
  b = !b;
 }

 pi = sqrt(pi * 12);

 cout << "π = " << pi << endl;
}

