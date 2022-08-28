#include <iostream>
#include <string>
#include <fstream>

int main(){

	std::string path;
	std::string text;

	std::cout<<"Input path to your file ";
	std::cin>>path;
	

	std::ifstream file;
	file.open(path);
	
	
	while(!file.eof()){
		file>>text;
		std::cout<<text;
	}


	file.close();

}
