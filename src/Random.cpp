#include "./defs/main.hpp"
#include <iostream>
#include <chrono>
#include <string>
using namespace std;
using namespace std::chrono;

Random::Random() {
  this->precission = 6;
}

Random::Random(int precission) {
  this->precission = precission;
}

int Random::GetPrecission() {
  return this->precission;
}

int Random::GetChrono() {
  milliseconds t2 = duration_cast< milliseconds >(
    system_clock::now().time_since_epoch()
  );
  return t2.count();
}

int Random::GetOneNumber() {
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

typedef long double ldo;

ldo Random::Rand() {
  string res = "0.";
  for(long i = 0; i < this->GetPrecission(); i ++) {
    res += this->GetOneNumber();
  }
  return atof(res.c_str());
}