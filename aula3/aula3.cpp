#include<iostream>
#include<string>

#include<fstream> // Read and Write Images

using namespace std;

int main() {

	// Read Images
	ifstream image;
	//Write imag
	ofstream newimage;

	// open images
	image.open("./images/monument01.ppm");
	newimage.open("./images/monument_Output_filter_Red.ppm");

	// Copy over header
	// P3  # "P3" means this is a RGB color image in ASCII
	string type = "";
	// 3 2          # "3 2" is the width and height of the image in pixels
	string width = "", height = "";
	// 255          # "255" is the maximum value for each color
	string RGB = "";
	// Copy over header 
	image >> type;
	image >> width;
	image >> height;
	image >> RGB;


	// Copy Header to new Image
	newimage << type << endl;
	newimage << width << " " << height << endl;
	newimage << RGB << endl;
	// The part below is the image data : RGB triplets
		// String="255">> 255 =int   0   0  # red

		// Reading Strings
	string red = "", green = "", blue = "";

	// Inte Values 
	//int intRed =0, intGreen=0, intBlue=0;
// String to Int!!!!

	while (!image.eof()) {

		// 3 Reading Strings
		// RGB - 195 209 222

		image >> red;
		image >> green;
		image >> blue;

		// Convert Strings into Ints

		//stringstream redstream(red);

		int intRED = stoi(red);
		int intGreen = stoi(green);
		int intBlue = stoi(blue);

		// Filter - Red 

		if (intRED + 30 > 255) {
			intRED = 255;
		}
		else
		{
			intRED += 30;
		}
		// Filter - blue 

		if (intBlue + 50 > 255) {
			intBlue = 255;
		}
		else
		{
			intBlue += 30;
		}
		// Filter - Green 

		if (intGreen - 30 > 255) {
			intGreen = 255;
		}
		else
		{
			intGreen -= 30;
		}

		// New Images
				//newimage << red << " " << green << " " << blue << " ";
		newimage << intRED << " " << intGreen << " " << intBlue << " ";

	}


	//close image

	image.close();
	newimage.close();
}