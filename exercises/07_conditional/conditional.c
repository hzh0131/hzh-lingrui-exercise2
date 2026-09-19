#include <stdio.h>

/*
 * conditional - same as x ? y : z
 *   Example: conditional(2,4,5) = 4
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 16
 *   Rating: 3
 */
int conditional(int x, int y, int z) {
//#error TODO: Return the equivalent of x ? y : z using bit operations.
    //int mask=((!x)<<31)>>31;算术右移规则：符号位是什么，高位就补什么
    return (~(((!x)<<31)>>31)&y)|((((!x)<<31)>>31)&z);//用与门实现y,z在不同条件下输出


}

int main(void) {
  int x, y, z;
  if (scanf("%d %d %d", &x, &y, &z) != 3)
    return 1;
  printf("%d\n", conditional(x, y, z));
  return 0;
}
