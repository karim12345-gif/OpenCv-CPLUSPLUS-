#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp> // image processing 
#include <iostream>

using namespace std;
using namespace cv;




///////////////////////////////////// Draw Shapes and Text  ///////////////////////////////////

void main() {


	//Blank Image , bits are basically based on the power of 2 
	// we wanna create our own image 
	// 8 bits means that you have range from 0-255
	// scalar is for the color 

	Mat img(512, 512, CV_8UC3,Scalar(0,0,0 ));
	// circle , point(256,256) IS TO draw the circle , and color and FIlled to make it full circle
	// you can either have it full or thickiness only , u cant have both 
	circle(img, Point(256, 256), 155, Scalar(255, 255, 255),10);
	rectangle(img, Point(130, 226), Point(382, 286), Scalar(255, 255, 255), FILLED);
	line(img,Point(133,296),Point(382,296),Scalar(255,255,255),2);
	putText(img,"im tired ",Point(180,262),FONT_HERSHEY_COMPLEX,1,Scalar(0,69,255),2);
	imshow("Image", img);
	

	waitKey(0);

}