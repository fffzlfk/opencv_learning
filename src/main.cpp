// #include <basic/basic_drawing.hpp>
// #include <basic/random.hpp>
// #include <basic/blur.hpp>
// #include <basic/erosion_dilatation.hpp>
// #include <basic/opening_closing_hats.hpp>
// #include <basic/hit_or_miss.hpp>
// #include <basic/morph_lines_detection.hpp>
// #include <transformations/filter_2d.hpp>
// #include <transformations/copy_make_border.hpp>
// #include <transformations/sobel_derivatives.hpp>
// #include <transformations/laplace.hpp>
// #include <transformations/canny.hpp>
#include "isa/include/isa/info_entropy.hpp"
#include <isa/laplacian.hpp>
#include <isa/roberts.hpp>
#include <isa/tenengrad.hpp>
#include <isa/var.hpp>
#include <isa/smd.hpp>
#include <isa/smd2.hpp>
#include <isa/max_min.hpp>
#include <isa/info_entropy.hpp>
using namespace isa;

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf(
            "%s: Invalid number of command line arguments. Exiting program\n",
            argv[0]);
        printf("Usage: %s [image]", argv[0]);
    }

    auto img = cv::imread(argv[1], cv::IMREAD_COLOR);
    cv::cvtColor(img, img, cv::COLOR_BGR2GRAY);

    var(img);
    roberts(img);
    tenengrad(img);
    laplacian(img);
    smd(img);
    smd2(img);
    max_min(img);
    info_entropy(img);

    return 0;
}
