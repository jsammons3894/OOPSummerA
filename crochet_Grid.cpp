#include <opencv2/opencv.hpp>
#include <iostream>

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cout << "COnvert an image to a 200x200 binary grid for two-tone crochet tapestry." << std::endl;
        return -1;
    }

    std::string imagePath = argv[1];

    // Load the image
    cv::Mat image = cv::imread(imagePath, cv::IMREAD_COLOR);
    if (image.empty()) {
        std::cerr << "Error: Could not open or find the image." << std::endl;
        return -1;
    }

    cv::Mat resizedImage;
    cv::resize(image, resizedImage, cv::Size(200, 200));

    cv::Mat grayImage;
    cv::cvtColor(resizedImage, grayImage, cv::COLOR_BGR2GRAY);

    cv::Mat bwImage;
    double thresh = 127; // Midpoint threshold
    cv::threshold(grayImage, bwImage, thresh, 255, cv::THRESH_BINARY);

    cv::imshow("Black and White Image", bwImage);
    cv::waitKey(0);

    // Optional: Save the result
    cv::imwrite("output_bw_200x200.png", bwImage);

    return 0;
}
