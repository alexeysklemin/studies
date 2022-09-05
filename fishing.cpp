#include <iostream>
#include <fstream>
#include <string>

int main(){
	
	std::string fish;
	std::string river = "river.txt";
	std::string bascket = "bascket.txt";

	std::ifstream fileRiver;
	fileRiver.open(river);

	std::ofstream fileBascket;
	fileBascket.open(bascket, std::ios::app);

	while(!fileRiver.eof()){

		fileRiver>>fish;
		fileBascket<<fish<<"\n";
	}

	fileRiver.close();
	fileBascket.close();
}
