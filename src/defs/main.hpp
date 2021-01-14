#include <opencv2/core.hpp>

#ifndef RANDOM_H
#define RANDOM_H
/**
 *  Random number generate class  
 */
class Random {
  public:
    /**
     * Without arguments
     * precission = 6
     */
    Random();
    Random(int precission);
    long double Rand();
    int GetOneNumber();
    int GetPrecission();
  protected:
    int GetChrono();
  private:
    int precission;
};

struct tColor {
  int r;
  int g;
  int b;
};

class Draw {
  public:
    Draw(int width, int height);
    void DrawPoint(int x, int y);
    int width;
    int height;
    cv::Mat image;
};

#endif