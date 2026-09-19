#include <stdio.h>

/*
 * tmin - return minimum two's complement integer
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 4
 *   Rating: 1
 */
int tmin(void) {
//#error TODO: Return the minimum 32-bit two's-complement integer
   return 1 << 31;

}

int main(void) {
  printf("%d\n", tmin());
  return 0;
}
