#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp> // image processing 
#include <iostream>

using namespace std;
using namespace cv;




///////////////////////////////////// Resize and crop  ///////////////////////////////////


/// <summary>
/// ///////////////////////////////////Images/////////////////////////////
/// </summary>

void main() {

	string path = "C:/Users/karim.salim/Desktop/OpenCvRoot/OpencvTryOutUsingcpLus/OpencvTryOutUsingcpLus/Resources/salah3.jpg";
	Mat salah = imread(path);
	Mat SalahResize , SalahCrop;
	//Resize the image , if we dont have a number in mind to scale it with we can simply add 0.5 is scaling 
	resize(salah, SalahResize,Size(),0.5,0.5);

	// Crop part of the image , cropping the left top image 
	Rect roi(210,50,50,80);
	SalahCrop = salah(roi);


	imshow("SALAH", salah);
	imshow("SalahResize", SalahResize);
	imshow("SalahCrop", SalahCrop);
	//cout << salah.size() << endl;
	
	if (salah.empty()) {
		cout << "Image wasnt loaded correctly ";
	}
	else
	{
		cout << "Image loaded correctly ";

	}
	waitKey(0);

}