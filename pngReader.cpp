#include <iostream>
#include <fstream>
#include <string>


int main(){


	std::string filename = "liza.png";
	std::cout<<"Input your file's path ";
	std::cin>>filename;
	std::string searchString;
	std::ifstream file;
	file.open(filename, std::ios::binary);

	if(!file){
		std::cout<<"File is not found";
		std::cout<<"\n";
	}else{
		file >> searchString;
		if(searchString.find("PNG") && filename.find(".png")){
			std::cout<<"It is PNG file";
		}
	}
	file.close();
}
