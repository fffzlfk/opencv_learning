// #include <basic/basic_drawing.hpp>
// #include <basic/random.hpp>
// #include <basic/blur.hpp>
// #include <basic/erosion_dilatation.hpp>
// #include <basic/opening_closing_hats.hpp>
// #include <basic/hit_or_miss.hpp>
// #include <basic/morph_lines_detection.hpp>
// #include <transformations/filter_2d.hpp>
// #include <transformations/copy_make_border.hpp>
#include <transformations/sobel_derivatives.hpp>

int main(int argc, char *argv[]) {
    // basic::basic_drawing::work();
    // basic::random::work();
    // basic::blur::work(argc, argv);
    // basic::opening_closing_hats::work(argc, argv);
    // basic::hit_or_miss::work();
    // basic::morph_lines_detection::work(argc, argv);
    // transformations::filter_2d::work(argc, argv);
    // transformations::copy_make_border::work(argc, argv);
    transformations::sobel_derivatives::work(argc, argv);
    return 0;
}
