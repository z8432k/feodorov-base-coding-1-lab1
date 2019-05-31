#include <iostream>
#include <math.h>

using namespace std;
using std::string;

#define PW(x) pow(x, 2)

double calc_z1(double a);
double calc_z2(double a);

static double readValue();

int main(void) {
  double a = readValue();

  cout << "Calculating math expressions.\n\n";
  cout << "z1 = " << calc_z1(a) << endl;
  cout << "z2 = " << calc_z2(a) << endl;

  return 0;
}

static double readValue() {
  double value;

  input:
  cout << "Input number: ";
  cin >> value;

  if (value == 0) {
    cerr << "Wrong value. Try again." << endl;
    goto input;
  }

  return value;
}

double calc_z1(double a) {
  return (1 / (((1 + a + PW(a)) / (2 * a + PW(a))) + 2 - ((1 - a + PW(a)) / (2 * a - PW(a))))) * (5 - 2 * PW(a));
}

double calc_z2(double a) {
  return (4 - PW(a)) / 2;
}
