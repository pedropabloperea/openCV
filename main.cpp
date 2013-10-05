#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include <fstream>

using namespace cv;
using namespace std;

int main( int argc, char** argv )
{
    Mat image;

    image = imread("multimedia/images/botin.jpg", CV_LOAD_IMAGE_COLOR);
	
	if(!image.data )                              // Check for invalid input
    {
        cout <<  "Could not open or find the image" << std::endl ;
        return -1;
    }
	
	// KEY LINE: Start the window thread
    //cvStartWindowThread();
    namedWindow("Display window", CV_WINDOW_AUTOSIZE );// Create a window for display.
	
	putText(image, "JELOU EVERIGUAN", cvPoint(100,120), FONT_HERSHEY_COMPLEX_SMALL, 0.8, Scalar::all(255), 1, 8);
    imshow("Display window", image);
    waitKey(0);                                          // Wait for a keystroke in the window

    return 0;
}