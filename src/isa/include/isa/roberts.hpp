#pragma once
#include <opencv2/opencv.hpp>
#include <utils/timer.hpp>

namespace isa {
void roberts(const cv::Mat &img) {
    ::utils::CpuTimer timer;
    timer.Start();
    const auto cols = img.cols;
    const auto rows = img.rows;
    ulong sum = 0;
    for (auto x = 0; x < cols - 1; x++) {
        for (auto y = 0; y < rows - 1; y++) {
            auto rx = img.at<uchar>(y + 1, x + 1) - img.at<uchar>(y, x);
            auto ry = img.at<uchar>(y, x + 1) - img.at<uchar>(y + 1, x);
            sum += abs(rx) + abs(ry);
        }
    }
    auto res = static_cast<double>(sum) / (cols * rows);
    timer.Stop();
    printf("roberts\tres:\t%f\ttime:\t%f\n", res, timer.Elapsed());
}
} // namespace isa
