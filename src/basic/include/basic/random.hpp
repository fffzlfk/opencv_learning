#pragma once

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

#include <iostream>
#include <stdio.h>

namespace basic {
namespace random {
namespace impl {

using namespace cv;

/// Global Variables
constexpr int NUMBER = 100;
constexpr int DELAY = 5;

constexpr int window_width = 900;
constexpr int window_height = 600;
constexpr int x_1 = -window_width / 2;
constexpr int x_2 = window_width * 3 / 2;
constexpr int y_1 = -window_width / 2;
constexpr int y_2 = window_width * 3 / 2;

/// Function headers
static Scalar randomColor(RNG &rng);
int Drawing_Random_Lines(Mat image, char *window_name, RNG rng);
int Drawing_Random_Rectangles(Mat image, char *window_name, RNG rng);
int Drawing_Random_Ellipses(Mat image, char *window_name, RNG rng);
int Drawing_Random_Polylines(Mat image, char *window_name, RNG rng);
int Drawing_Random_Filled_Polygons(Mat image, char *window_name, RNG rng);
int Drawing_Random_Circles(Mat image, char *window_name, RNG rng);
int Displaying_Random_Text(Mat image, char *window_name, RNG rng);
int Displaying_Big_End(Mat image, char *window_name, RNG rng);

int work();
} // namespace impl
using impl::work;
} // namespace random
} // namespace basic