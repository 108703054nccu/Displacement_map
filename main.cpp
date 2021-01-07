#include <iostream>
#include <fstream>
#include <jpeglib.h>
using namespace std;

int main(){
	ifstream pic_in;
	int Height,Width;
	int pic[960][636];
	pic_in.open("PIC/PIC3.jpeg",ios::in);
	if(!pic_in.is_open())cout<<"File not reead"<<std::endl;
	for(int i = 0; i<Height; i++){
		for(int j = 0; j<Width ; j++){
			pic_in>>pic[i][j];
			std::cout<<pic[i][j];
		}
	}
	pic_in.close();
	return 0;
}
