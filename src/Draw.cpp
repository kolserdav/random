#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include "defs/main.hpp"
#include <iostream>
using namespace std;
using namespace cv;

Draw::Draw(int width, int height) {
  this->width = width;
  this->height = height;
  this->image = Mat(this->width, this->height, CV_8UC3);
}

void Draw::DrawPoint(int x, int y, tColor color) {
  bool first = this->image.at<Vec3b>(x, y)[0] != color.b;
  bool two = this->image.at<Vec3b>(x, y)[0] == 66;
  this->image.at<Vec3b>(x, y)[2] = (first) ? color.r : 245;
  this->image.at<Vec3b>(x, y)[1] = (first) ? color.g : 78;
  this->image.at<Vec3b>(x, y)[0] = (first) ? color.b : 66;
  if (!first) {
    this->image.at<Vec3b>(x, y)[2] = (two) ? 239 : 255;
    this->image.at<Vec3b>(x, y)[1] = (two) ? 245 : 255;
    this->image.at<Vec3b>(x, y)[0] = (two) ? 65 : 255;
  }
}