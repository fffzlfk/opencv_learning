#pragma once

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

namespace basic {
namespace basic_drawing {
namespace impl {
#define w 400

using namespace cv;

void MyEllipse(Mat img, double angle);
void MyFilledCircle(Mat img, Point center);
void MyPolygon(Mat img);
void MyLine(Mat img, Point start, Point end);

int work(int argc, char *argv[]);
} // namespace impl
using impl::work;
} // namespace basic_drawing
} // namespace basic