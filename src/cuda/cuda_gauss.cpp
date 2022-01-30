#include "cuda/cuda_gauss.hpp"

namespace cuda {
namespace cuda_gauss {
int work(int argc, char *argv[]) {
  cv::Mat h_img1 = cv::imread("./images/lena.png");
  cv::cuda::GpuMat d_img1, d_result3x3, d_result5x5, d_result7x7;

  // 加载数据
  d_img1.upload(h_img1);

  // 创建高斯
  auto filter3x3 =
      cv::cuda::createGaussianFilter(CV_8UC3, CV_8UC3, cv::Size(3, 3), 5);
  auto filter5x5 =
      cv::cuda::createGaussianFilter(CV_8UC3, CV_8UC3, cv::Size(5, 5), 5);
  auto filter7x7 =
      cv::cuda::createGaussianFilter(CV_8UC3, CV_8UC3, cv::Size(7, 7), 5);

  // 执行
  filter3x3->apply(d_img1, d_result3x3);
  filter5x5->apply(d_img1, d_result5x5);
  filter7x7->apply(d_img1, d_result7x7);

  // 获取结果
  cv::Mat h_result3x3, h_result5x5, h_result7x7;
  d_result3x3.download(h_result3x3);
  d_result5x5.download(h_result5x5);
  d_result7x7.download(h_result7x7);

  // 显示
  cv::imshow("Original Image ", h_img1);
  cv::imshow("Blurred with kernel size 3x3", h_result3x3);
  cv::imshow("Blurred with kernel size 5x5", h_result5x5);
  cv::imshow("Blurred with kernel size 7x7", h_result7x7);

  cv::waitKey(0);
  return 0;
}
} // namespace cuda_gauss
} // namespace cuda