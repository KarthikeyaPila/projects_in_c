#include <stdio.h>
#include <assert.h>
#include "./fibonacci.h"

int main() {
  assert(fibonacci(0) == 0);
  assert(fibonacci(1) == 1);
  assert(fibonacci(2) == 1);
  assert(fibonacci(3) == 2);
  assert(fibonacci(4) == 3);
  assert(fibonacci(5) == 5);
  assert(fibonacci(6) == 8);
  assert(fibonacci(7) == 13);
  assert(fibonacci(8) == 21);
  assert(fibonacci(-1) == 0);
  assert(fibonacci(-5) == 0);
  assert(fibonacci(-8) == 0);
  printf("%ld\n", fibonacci(150));
  return 0;
}
