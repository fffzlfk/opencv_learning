#pragma once
#include <opencv2/opencv.hpp>
#include <utils/timer.hpp>

namespace isa {
using namespace cv;
void max_min(const Mat &img) {
    ::utils::CpuTimer timer;
    timer.Start();
    const auto cols = img.cols;
    const auto rows = img.rows;
    ulong sum = 0;
    for (auto x = 1; x < cols - 1; x++) {
        for (auto y = 1; y < rows - 1; y++) {
            uchar max_val = 0;
            uchar min_val = 255;
            for (auto i = -1; i <= 1; i++) {
                for (auto j = -1; j <= 1; j++) {
                    uchar val = img.at<uchar>(y + j, x + i);
                    max_val = std::max(max_val, val);
                    min_val = std::min(min_val, val);
                }
            }
            sum += max_val - min_val;
        }
    }
    auto res = static_cast<double>(sum) / (cols * rows);
    timer.Stop();
    printf("max_min\tres:\t%f\ttime:\t%f\n", res, timer.Elapsed());
}
} // namespace isa