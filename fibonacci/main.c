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

  // turns out i=93 is the limit for unsigned long long
  for(int i=0; i<100; i++){
    printf("%d -> %llu\n", i, fibonacci(i));
  }

  return 0;
}
