#include <iostream>
#include <fstream> // abre e le imagens 

using namespace std;

int main() {

	// Create imagens
	std::ofstream image;
	
	image.open("./images/RGB.ppm");
	
	if (image.is_open()) {
		//headings
		image << "P3" << endl;
		image << "3 2" << endl;
		image << "255" << endl;

		//image body

		image << "255 0 0" << endl;				
		image << "0 255 0" << endl;				//green
		image << "0 0 255" << endl;				//blue
		image << "255 255 0" << endl;			//yellow
		image << "255 255 255" << endl;			//white
		image << "0 0 0" << endl;				//black
	
	
	}
	

	image.close();

}


