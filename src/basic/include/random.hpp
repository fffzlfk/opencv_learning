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
const int NUMBER = 100;
const int DELAY = 5;

const int window_width = 900;
const int window_height = 600;
const int x_1 = -window_width / 2;
const int x_2 = window_width * 3 / 2;
const int y_1 = -window_width / 2;
const int y_2 = window_width * 3 / 2;

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