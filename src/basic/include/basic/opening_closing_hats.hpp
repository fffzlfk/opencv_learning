#pragma once

#include "opencv2/highgui.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/imgproc.hpp"
#include <iostream>

namespace basic {
namespace opening_closing_hats {
namespace impl {

using namespace cv;

void Morphology_Operations(int, void *);
int work(int argc, char *argv[]);
} // namespace impl
using impl::work;
} // namespace opening_closing_hats
} // namespace basic