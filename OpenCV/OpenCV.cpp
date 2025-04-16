#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

#include <iostream>
#include <string>

int main(){    
    
    std::string path = "Images/BlackTempler.jpeg";
    
    cv::VideoCapture webCam(1);
    
    while (true) {
        cv::Mat image;

        webCam.read(image);


        cv::Mat imgGray, imgBlur, imgEdge;

        //cv::cvtColor(image, imgGray, cv::COLOR_BGR2GRAY);
        //cv::GaussianBlur(image, imgBlur, cv::Size(5, 5), 5, 0);
        cv::Canny(image, imgEdge, 50, 150);
        cv::flip(imgEdge, imgEdge, 1);
        //cv::imshow("Image", image);
        //cv::imshow("GrayScale", imgGray);
        //cv::imshow("Blur", imgBlur);
        cv::imshow("Edge", imgEdge);
        cv::waitKey(20);
    }


}

