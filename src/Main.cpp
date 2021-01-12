#include "./defs/main.hpp"
#include <iostream>
#include <chrono>
#include <string>
using namespace std;
using namespace std::chrono;

int Main::GetChrono() {
  milliseconds t2 = duration_cast< milliseconds >(
    system_clock::now().time_since_epoch()
  );
  return t2.count();
}

int Main::GetOne() {
  int t = this->GetChrono();
  int i;
  for(i = 0;; i ++) {
    int t2 = this->GetChrono();
    if ((t - t2) != 0) {
      break;
    }
  }
  string is = to_string(i);
  return (int) is.back();
};

long double Main::Rand() {
  int t1 = this->GetChrono();
  string res = "0.";
  for(int i = 0; i < 12; i ++) {
    res += this->GetOne();
  }
  return stold(res);
}