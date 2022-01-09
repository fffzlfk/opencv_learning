#include "opencv2/highgui.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/imgproc.hpp"
#include <iostream>

namespace basic {
namespace blur {
namespace impl {
int work(int argc, char *argv[]);

int display_caption(const char *caption);
int display_dst(int delay);
} // namespace impl
using impl::work;
} // namespace blur
} // namespace basic