// Written by Josh Williams
// jodawill@umail.iu.edu

// This program uses the Bailey-Borwein-Plouffe formula to compute π:
//     ∞  [ 1    (  4          2          1          1   )  ]
// π = ∑  |---  ( ______  -  ______  -  ______  -  ______ ) |
//    k=0 [16^k  (8k + 1     8k + 4     8k + 5     8k + 6)  ]

#include <iostream>
#include <cmath>

using namespace std;

int main() {
 int iter = 11; // Number of iterations to compute formula
 double pi = 0;
 cout.precision(16);

 for (double k = 0; k < iter; k++) {
  pi += (1 / (pow(16, k)) * ((120*k*k + 151*k + 47)/(512*k*k*k*k + 1024*k*k*k + 712*k*k + 194*k + 15)));
 }

 cout << "π ≈ " << pi << endl;
}

