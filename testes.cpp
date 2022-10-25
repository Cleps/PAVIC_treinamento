#include <iostream>
#include <fstream> // abre e le imagens 
#include <sstream>

using namespace std;


int main() {
    string str = "7";
    int num = 12;
    cout<<num;

}


	/* Create imagens
	ofstream image;

	ifstream newimage;

	image.open("./images/monument.ppm");
	newimage.open("./images/monument_Output.ppm");

	//copy over  headers

	string type = "p3";

	string width = "12", height = "11";

	string RGB = "RGB";

    string red = "255";
    int ired;
    ired = ( int ) red;

    }



	newimage << type << endl;
	newimage << width << " " << height << endl;
	newimage << RGB << endl;


	image.close();
	newimage.close();
 */

	/*
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
	
		for (int h = 0; h <100; h++) {
			for (int v = 0; v < 100; v++) {
				image << "255 0 0" << endl;
				
			}
			

		}
	}
	

	image.close();

}

*/
