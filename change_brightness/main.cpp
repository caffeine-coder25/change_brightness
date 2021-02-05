//
//  main.cpp
//  change_brightness
//
//  Created by shubham  saxena  on 05/02/21.
//

#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
    Mat image = imread("/Users/caffeine_coder25/Desktop/just_code_it/coders_packet_internship/change_brightness/rose.jpg");

    if (image.empty())
    {
        cout << "Could not open or find the image" << endl;
        cin.get();
        return -1;
    }

    Mat imageBrighnessHigh50;
    image.convertTo(imageBrighnessHigh50, -1, 1, 50);

    Mat imageBrighnessLow50;
    image.convertTo(imageBrighnessLow50, -1, 1, -50);

    String windowNameOriginalImage = "Original Image";
    String windowNameBrightnessHigh50 = "Brightness Increased by 50";
    String windowNameBrightnessLow50 = "Brightness Decreased by 50";

    namedWindow(windowNameOriginalImage, WINDOW_NORMAL);
    namedWindow(windowNameBrightnessHigh50, WINDOW_NORMAL);
    namedWindow(windowNameBrightnessLow50, WINDOW_NORMAL);
    
    imshow(windowNameOriginalImage, image);
    imshow(windowNameBrightnessHigh50, imageBrighnessHigh50);
    imshow(windowNameBrightnessLow50, imageBrighnessLow50);
    
    waitKey(0);

    destroyAllWindows();

    return 0;
}
