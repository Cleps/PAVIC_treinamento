
#include<iostream>
#include <fstream> // Read and Write image

using namespace std;

int main1() {
	//Create images
	std::ofstream image;

	image.open("./images/RGB-01.ppm");
	if (image.is_open()) {
		// Header 
		image << "P3" << endl;
		image << "100 100" << endl;
		image << "255" << endl;



		for (int ImgH = 0; ImgH<100; ImgH++)
		{
			for (int ImgV = 0; ImgV<100; ImgV++)
			{
				image << "255 0 250" << endl;
			}
		}
		
	}
	image.close();
	return 0;
}