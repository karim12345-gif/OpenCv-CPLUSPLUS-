#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp> // image processing 
#include <iostream>

using namespace std;
using namespace cv;




///////////////////////////////////// Basic Functions ///////////////////////////////////


/// <summary>
/// ///////////////////////////////////Images/////////////////////////////
/// </summary>

void main() {

	string path = "C:/Users/karim.salim/Desktop/OpenCvRoot/OpencvTryOutUsingcpLus/OpencvTryOutUsingcpLus/Resources/salah3.jpg";
	Mat salah = imread(path);
	Mat SalahGray , SalahBlur , SalahCanny , SalahDilate , SalahErode;
	//Python had RGB = red , green and blue , C++ has BGR , blue,Green and red
	cvtColor(salah,SalahGray,COLOR_BGR2GRAY);
	//Bluring the image,Kernel is always odd number so we gave it a 7,7.
	GaussianBlur(SalahGray,SalahBlur,Size(7,7),5,0);
	// Image Edge Detection using canny , can always play around with the numbers 
	Canny(SalahBlur, SalahCanny,50,150);


	//we wanna incrase the thickniess of the edges becuase they werent that visiable , using dilate
	//we created a kernel to use with dilation if we increase the size from 5,5 to more it will dilate more and visa versa , but only odd numbers 
	Mat Kernel = getStructuringElement(MORPH_RECT, Size(3,3));
	dilate(SalahCanny, SalahDilate,Kernel);
	// erode  makes the edges thiner incontrast to dilate 
	erode(SalahDilate, SalahErode, Kernel);


	// canny spots the edges , dilate increase edges thicnkess and Erode decreases it 




	imshow("SALAH", salah);
	imshow("SALAHGray", SalahGray);
	imshow("SALAHBLUR", SalahBlur);
	imshow("SalahCanny", SalahCanny);
	imshow("SalahDilate", SalahDilate);
	imshow("SalahErode", SalahErode);
	if (salah.empty()) {
		cout << "Image wasnt loaded correctly ";
	}
	else
	{
		cout << "Image loaded correctly ";

	}
	waitKey(0);

}