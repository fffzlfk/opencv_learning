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
    for (size_t x = 1; x < cols - 1; x++) {
        for (size_t y = 1; y < rows - 1; y++) {
            uchar max_val = 0;
            uchar min_val = 255;
            for (size_t i = -1; i <= 1; i++) {
                for (size_t j = -1; j <= 1; j++) {
                    max_val = std::max(max_val, img.at<uchar>(y + i, x + j));
                    min_val = std::min(min_val, img.at<uchar>(y + i, x + j));
                }
            }
            sum += max_val - min_val;
        }
    }
    auto res = static_cast<double>(sum) / (cols * rows);
    timer.Stop();
    printf("res:\t%f\ttimer:\t%f\n", res, timer.Elapsed());
}
} // namespace isa