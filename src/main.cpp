#include "./defs/main.hpp"
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
using namespace std;

const int MAX_COUNT = 1000;

int main(int argc, char **argv) {
  Random r = Random(12);
  Draw d = Draw(MAX_COUNT, MAX_COUNT);
  int precission = r.GetPrecission();
  cout << "Start programm with count: " << MAX_COUNT << ". Wait ..." << endl;
  for (int i = 0; i < MAX_COUNT * 10; i ++) {
    double resX = r.Rand() * (MAX_COUNT - 1) + 1;
    int pointX = (unsigned int) resX;
    double resY = r.Rand() * (MAX_COUNT - 1) + 1;
    int pointY = (unsigned int) resY;
    //cout << "resX: " << resX << " resY: " << resY << endl;
    d.DrawPoint(pointX, pointY);
  }
  cv::imshow("Mat", d.image);
  int k = cv::waitKey();
  return 0;
}