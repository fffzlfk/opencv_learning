#pragma once
#include <opencv2/opencv.hpp>

namespace isa {
using namespace cv;
void smd2(const Mat &img) {
    ::utils::CpuTimer timer;
    timer.Start();
    const auto cols = img.cols;
    const auto rows = img.rows;
    ulong sum = 0;
    for (auto x = 0; x < cols - 1; x++) {
        for (auto y = 0; y < rows - 1; y++) {
            long dx, dy;
            dx = img.at<uchar>(y, x) - img.at<uchar>(y, x + 1);
            dy = img.at<uchar>(y, x) - img.at<uchar>(y + 1, x);
            sum += abs(dx * dy);
        }
    }
    auto res = static_cast<double>(sum) / (cols * rows);
    timer.Stop();
    printf("smd2\tres:\t%f\ttime:\t%f\n", res, timer.Elapsed());
}
} // namespace isa