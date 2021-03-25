#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp> // image processing 
#include <iostream>

using namespace std;
using namespace cv;
/// <summary>
/// ///////////////////////////////// images ////////////////////////////////////
/// </summary>
//void main() {
//
//	string path = "C:/Users/karim.salim/Desktop/OpenCvRoot/OpencvTryOutUsingcpLus/OpencvTryOutUsingcpLus/Resources/test.png";
//
//	//cvtColor(path,img_gray, COLOR_BGR2GRAY);
//	
//	//imread will read the images , Mat is a matrix data type that is introcuded nu opencv to handle all the images , so if we use images then we will use Mat 
//	Mat img = imread(path); 
//	imshow("image", img);
//	// add the following lines
//	if (img.empty())
//		cout << "failed to open img.jpg" << endl;
//	else
//		cout << "img.jpg loaded OK" << endl;
//
//	  // the rest of your code
//	waitKey(0);// zero for infinity , it will not close until we stop the program form running  
//
//}


/// <summary>
//////////////////////////////////video//////////////////////// 
/// </summary>
//
//void main() {
//	string path = "C:/Users/karim.salim/Desktop/OpenCvRoot/OpencvTryOutUsingcpLus/OpencvTryOutUsingcpLus/Resources/test_video.mp4";
//	VideoCapture cap(path);
//	Mat img;
//
//
//	while (true) {
//
//		// we need to read our image , we stored it in the img variable which is outside the loop 
//		cap.read(img);
//		imshow("image", img);
//		// the rest of your code
//		waitKey(20);// zero for infinity , it will not close until we stop the program form running  
//
//
//	}
//
//	
//}





///////////////////////Webcam///////////////////////

void main() {


	VideoCapture cap(0);
	Mat i;


	while (true) {
		cap.read(i);
		imshow("Image", i);
		waitKey(1);
	}
}