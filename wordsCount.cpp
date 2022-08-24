#include <iostream>
#include <fstream>
#include <string>

int main(){

	std::string filename = "words.txt";
	std::string line;
	int count=0;

std::ifstream file;
file.open (filename);

	if(!file){
		std::cout<<"file is not opened";
	}else{
		std::ifstream file (filename);
		std::string searchWord;
		//std::cin>> searchWord;
		searchWord = "Harold";
		std::string resourceWord;
		while(!file.eof()){
			if(searchWord==resourceWord){
				count++;
			}
		}
	}
	file.close();

	std::cout<<count;
}

