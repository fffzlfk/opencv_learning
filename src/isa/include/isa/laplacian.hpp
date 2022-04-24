#pragma once
#include <opencv2/opencv.hpp>
#include <utils/timer.hpp>

namespace isa {
void laplacian(const cv::Mat &img) {
    ::utils::CpuTimer timer;
    timer.Start();
    const auto cols = img.cols;
    const auto rows = img.rows;
    ulong sum = 0;
    for (auto x = 1; x < cols - 1; x++) {
        for (auto y = 1; y < rows - 1; y++) {
            int lx, ly;
            lx = img.at<uchar>(y, x + 1) + img.at<uchar>(y, x - 1) -
                 2 * img.at<uchar>(y, x);
            ly = img.at<uchar>(y + 1, x) + img.at<uchar>(y - 1, x) -
                 2 * img.at<uchar>(y, x);
            sum += abs(lx) + abs(ly);
        }
    }
    auto res = static_cast<double>(sum) / (cols * rows);
    timer.Stop();
    printf("laplacian\tres:\t%f\ttime:\t%f\n", res, timer.Elapsed());
}
} // namespace isa