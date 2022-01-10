#pragma once

#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include <iostream>

namespace basic {
namespace erosion_dilatation {
namespace impl {
using namespace cv;
using namespace std;

void Erosion(int, void *);
void Dilation(int, void *);

int work(int argc, char *argv[]);
} // namespace impl
using impl::work;
} // namespace erosion_dilatation
} // namespace basic