#pragma once

#include "opencv2/highgui.hpp"
#include <opencv2/core.hpp>
#include <opencv2/cudafilters.hpp>

namespace cuda {
namespace cuda_gauss {
int work(int argc, char *argv[]);
}
} // namespace cuda