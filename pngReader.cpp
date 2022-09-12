#include <iostream>
#include <fstream>
#include <string>


int main(){
	char exp[1024];


	std::string filename = "liza.png";
	std::cout<<"Input your file's path ";
//	std::cin>>filename;
	std::string searchString;
	std::ifstream file;
	file.open(filename, std::ios::binary);

	if(!file){
		std::cout<<"File is not found";
		std::cout<<"\n";
	}else{
		file.getline(exp, 1024, '\0');
		char* expPtr = &exp;
		while(exp!='\0'){
			if(exp!='P'){
				expPtr++;
			}
			if(exp!='N'){
				expPtr++;
			}

	}

	file.close();
}
