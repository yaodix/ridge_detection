#include "iostream"

#include <opencv2/opencv.hpp>

int main() {
  cv::Mat img = cv::imread("./data/image.png");
  std::cout << "img size " << img.size() << std::endl;
  return 0;
}