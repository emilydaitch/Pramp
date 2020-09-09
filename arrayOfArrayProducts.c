#include <stdio.h>
#include <stdlib.h>

// empty array, array of length one

void arrayOfArrayProducts(int const *arr, int* out, size_t arrLength) 
{
  int product = 1;
  if (arrLength < 1) return;
  else if (arrLength > 1) {
    for (int i = 0; i < arrLength - 1; ++i) {
      out[i] = product;
      product *= arr[i];
      printf("%d\n", out[i]);
    }
    product = 1;
    for (int i = arrLength - 1; i >= 0; --i) {
      out[i] *= product;
      product *= arr[i];
    }
  }
  else out[0] = arr[0];
  return;
}

int main() {
  return 0;
}