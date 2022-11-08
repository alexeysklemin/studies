#include <iostream>
#include <fstream>
#include <string>

int main(){
	
	std::string fish;
    std::string fishermansWish;
	std::string river = "river.txt";
	std::string bascket = "bascket.txt";
	int count =0;

	std::ifstream fileRiver;
	fileRiver.open(river);

	std::ofstream fileBascket;
	fileBascket.open(bascket, std::ios::app);

	while(!fileRiver.eof()){
        std::cout<<"Input fisherman's wish ";
        std::getline(std::cin,fishermansWish);
		fileRiver>>fish;
        if(fishermansWish==fish){
		count++;
		std::cout<<fish<<""<<count;
		fileBascket<<fish<<"\n";
        }
	}

	fileRiver.close();
	fileBascket.close();
}
