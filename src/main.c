#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PW(x) pow(x, 2)
#define NUMBER (42.)

double calc_z1(double a);
double calc_z2(double a);

static double readValue(const int argc, const char **argv);

int main(const int argc, const char **argv) {
  double a = readValue(argc, argv);

  printf("Calculating math expressions.\n\n");

  printf("z1 = %.3f\n", calc_z1(a));
  printf("z2 = %.3f\n", calc_z2(a));

  return 0;
}

static double readValue(const int argc, const char **argv) {
  double value = 0.;

  if (argc < 2) {
    printf("Value not pass from CLI. Used predefined value %.3f\n", NUMBER);
    value = NUMBER;
  }
  else {
    value =  atof(argv[1]);
  }

  return value;
}

double calc_z1(double a) {
  return (1 / (((1 + a + PW(a)) / (2 * a + PW(a))) + 2 - ((1 - a + PW(a)) / (2 * a - PW(a))))) * (5 - 2 * PW(a));
}

double calc_z2(double a) {
  return (4 - PW(a)) / 2;
}
