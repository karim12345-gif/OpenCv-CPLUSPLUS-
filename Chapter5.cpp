#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp> // image processing 
#include <iostream>

using namespace std;
using namespace cv;


void main() {


	string path = "C:/Users/karim.salim/Desktop/OpenCvRoot/OpencvTryOutUsingcpLus/OpencvTryOutUsingcpLus/Resources/cards.jpg";
	Mat  matrix , imgWarp ;
	float w = 250, h = 350;
	Mat img = imread(path);
	// these are the cooridnates we detected in the paiting for the king card
	//Point2f src[4] = { {529,142},{771,190},{405,395},{674,457}};
	//Point2f dst[4] = { {0.0f,0.0f},{w,0.0f},{0.0f,h},{w,h}};



	// Jack coordinates , when writing coordinates u have to start from top left to top right and bottom left to bottom right 
	Point2f src[4] = { {773,105},{1015,81},{845,357},{1117,331}};
	Point2f dst[4] = { {0.0f,0.0f},{w,0.0f},{0.0f,h},{w,h} };


	matrix = getPerspectiveTransform(src,dst);
	warpPerspective(img, imgWarp, matrix, Point(w, h));




	imshow("Image", img);
	imshow("ImageWarp", imgWarp);

	waitKey(0);
}