#include <iostream>
#include <string>
#include <fstream>

int main(){

	std::string path;
	char* text;

	std::cout<<"Input path to your file ";
	std::cin>>path;  

	

	std::ifstream file;
	file.open(path);
	
	if(file){
		while(!file.eof()){
			file>>text;
			if(*text!= '\0'){
				std::cout<<text;
			}
		}
	}else{
		std::cout<<"File is not found\n";
	}


	file.close();

}
