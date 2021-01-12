#include "./defs/main.hpp"
#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  Main m = Main();
  long double res = m.Rand();
  cout << res << endl;
  return 0;
}