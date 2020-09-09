#include <iostream>

using namespace std;

// TODO: edge case of increasing vs decreasing solutions

double root(double x, unsigned int n) 
{
  //init
  double guess = x / 2;
  double lowerBound = 1.0;
  double upBound = x;
  double gpown = 1.0;
  for (int i = 0; i < n; ++i) {
    gpown *= guess; //
  //std::cout << i << std::endl;
  }
  while ((x - gpown) > .001 || (x - gpown) < -.001) {
    cout << guess << endl;
    gpown = 1.0;
    for (int i = 0; i < n; ++i) {
      gpown *= guess; //
      //std::cout << i << std::endl;
    }
    if (x - gpown > .001) {
      // guess too small
      lowerBound = guess;
      guess = lowerBound + (upBound - lowerBound)/2;
    }
    else {
      upBound = guess;
      guess = lowerBound + (upBound - lowerBound)/2;
    }
  }
  return guess;
}

int main() {
  std::cout << root(0.16,4) << std::endl;
  return 0;
}