#include <assert.h>
#include "./fibonacci.h"

int main() {
  assert(fibonacci(0) == 1);
  assert(fibonacci(1) == 1);
  assert(fibonacci(2) == 2);
  assert(fibonacci(3) == 3);
  assert(fibonacci(4) == 5);
  assert(fibonacci(5) == 8);
  assert(fibonacci(6) == 13);
  assert(fibonacci(7) == 21);
  assert(fibonacci(8) == 34);
  assert(fibonacci(-1) == 0);
  assert(fibonacci(-5) == 0);
  assert(fibonacci(-8) == 0);
  return 0;
}
