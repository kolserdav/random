#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include "defs/main.hpp"
#include <iostream>
#include <cstdlib>
using namespace std;
using namespace cv;

Draw::Draw(int width, int height) {
  this->width = width;
  this->height = height;
  this->image = Mat(this->width, this->height, CV_8UC3);
}

void Draw::DrawPoint(int x, int y) {
  tColor color;
  color.r = 255;
  color.g = 0;
  color.b = 254;
  // Twice in one point
  if (this->image.at<Vec3b>(x, y)[0] == color.b) {
    color.g = 255;
  }
  this->image.at<Vec3b>(x, y)[0] = color.b;
  this->image.at<Vec3b>(x, y)[1] = color.g;
  this->image.at<Vec3b>(x, y)[2] = color.r;

}