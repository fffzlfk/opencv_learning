#pragma once
#include <opencv2/opencv.hpp>
#include <utils/timer.hpp>

namespace isa {
void var(const cv::Mat &img) {
    ::utils::CpuTimer timer;
    timer.Start();
    auto _mean = mean(img)[0];
    const auto cols = img.cols;
    const auto rows = img.rows;
    ulong sum = 0;
    for (auto x = 0; x < cols; x++) {
        for (auto y = 0; y < rows; y++) {
            auto e = img.at<uchar>(y, x);
            sum += (e - _mean) * (e - _mean);
        }
    }
    auto res = static_cast<double>(sum) / (cols * rows);
    timer.Stop();
    printf("var\tres:\t%f\ttime:\t%f\n", res, timer.Elapsed());
}
} // namespace isa
