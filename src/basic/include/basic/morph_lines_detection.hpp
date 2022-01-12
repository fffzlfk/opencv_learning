#pragma once

#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

namespace basic {
namespace morph_lines_detection {
namespace impl {

void show_wait_destroy(const char *winname, cv::Mat img);
using namespace std;
using namespace cv;

int work(int argc, char *argv[]);

} // namespace impl
using impl::work;
} // namespace morph_lines_detection
} // namespace basic