#pragma once
#include <opencv2/opencv.hpp>

namespace isa {
using namespace cv;
void tenengrad(const Mat &img) {
    ::utils::CpuTimer timer;
    timer.Start();
    const auto cols = img.cols;
    const auto rows = img.rows;
    ulong sum = 0;
    for (auto x = 1; x < cols - 1; x++) {
        for (auto y = 1; y < rows - 1; y++) {
            int dx, dy;
            dx = (-1 * img.at<uchar>(y - 1, x - 1)) +
                 (-2 * img.at<uchar>(y, x - 1)) +
                 (-1 * img.at<uchar>(y + 1, x - 1)) +
                 (1 * img.at<uchar>(y - 1, x + 1)) +
                 (2 * img.at<uchar>(y, x + 1)) +
                 (1 * img.at<uchar>(y + 1, x + 1));

            dy = (-1 * img.at<uchar>(y - 1, x - 1)) +
                 (-2 * img.at<uchar>(y - 1, x)) +
                 (-1 * img.at<uchar>(y - 1, x + 1)) +
                 (1 * img.at<uchar>(y + 1, x - 1)) +
                 (2 * img.at<uchar>(y + 1, x)) +
                 (1 * img.at<uchar>(y + 1, x + 1));
            sum += ((dx * dx) + (dy * dy));
        }
    }
    auto res = static_cast<double>(sum) / (cols * rows);
    timer.Stop();
    printf("tenengrad\tres:\t%f\ttime:\t%f\n", res, timer.Elapsed());
}
} // namespace isa
