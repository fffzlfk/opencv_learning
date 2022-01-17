#pragma once

#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include <iostream>

namespace transformations {
namespace canny {
namespace impl {
using namespace cv;
static void CannyThreshold(int, void *);
int work(int argc, char *argv[]);
} // namespace impl
using impl::work;
} // namespace canny
} // namespace transformations