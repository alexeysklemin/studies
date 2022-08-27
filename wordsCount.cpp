#include <iostream>
#include <fstream>
#include <string>

int main(){

	std::string filename = "words.txt";
	std::string searchWord = "Harold";
	std::string resourceWord;
	int count=0;

std::ifstream file;
file.open (filename);

	if(file){
		std::ifstream file (filename);
		while(!file.eof()){
			file>>resourceWord;
			if(resourceWord==searchWord){
				count++;
			}
		}
	}else{
		if(!file){
			std::cout<<"File is not open";
	;
		}
	}
	file.close();

	std::cout<<count<<"\n";
}

