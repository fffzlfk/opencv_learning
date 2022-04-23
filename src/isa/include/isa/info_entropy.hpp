#pragma once
#include <opencv2/opencv.hpp>
#include <utils/timer.hpp>

namespace isa {
using namespace cv;
void info_entropy(const Mat &img) {
    ::utils::CpuTimer timer;
    timer.Start();
    const auto cols = img.cols;
    const auto rows = img.rows;
    double sum = 0;
    double p[256] = {0};
    for (size_t x = 0; x < cols; x++) {
        for (size_t y = 0; y < rows; y++) {
            auto e = img.at<uchar>(y, x);
            p[e]++;
        }
    }
    for (size_t i = 0; i < 256; i++) {
        p[i] /= (cols * rows);
    }
    for (size_t i = 0; i < 256; i++) {
        if (p[i] != 0) {
            sum += p[i] * log2(p[i]);
        }
    }
    timer.Stop();
    printf("res:\t%f\ttimer:\t%f\n", -sum, timer.Elapsed());
}
} // namespace isa