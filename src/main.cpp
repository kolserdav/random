#include "./defs/main.hpp"
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
using namespace std;

const int MAX_COUNT = 2000;

int main(int argc, char **argv) {
  Random r = Random(12);
  Draw d = Draw(MAX_COUNT/2, MAX_COUNT/2);
  int precission = r.GetPrecission();
  tColor color;
  color.r = 255;
  color.g = 0;
  color.b = 254;
  cout << "Start programm with count: " << MAX_COUNT << ". Wait ..." << endl;
  for (int i = 0; i < MAX_COUNT; i ++) {
    double resSelf = r.Rand() * (MAX_COUNT - 1) + 1;
    int pointSelf = (unsigned int) resSelf;
    d.DrawPoint(pointSelf/2, pointSelf/2, color);
  }
  cv::imshow("Mat", d.image);
  int k = cv::waitKey();
  return 0;
}