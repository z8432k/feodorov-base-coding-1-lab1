#include <stdio.h>
#include <math.h>

#define PW(x) pow(x, 2)
#define NUMBER 42

double calc_z1(double a);
double calc_z2(double a);

int main(void) {
  printf("Calculating math expressions.\n\n");

  printf("z1 = %.3f\n", calc_z1(NUMBER));
  printf("z2 = %.3f\n", calc_z2(NUMBER));

  return 0;
}

double calc_z1(double a) {
  return (1 / (((1 + a + PW(a)) / (2 * a + PW(a))) + 2 - ((1 - a + PW(a)) / (2 * a - PW(a))))) * (5 - 2 * PW(a));
}

double calc_z2(double a) {
  return (4 - PW(a)) / 2;
}
