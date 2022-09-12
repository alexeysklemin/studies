#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

int main(){
	char fileRead[1024];
	char filename[9];


	filename = "liza.png";
	std::cout<<"Input your file's path ";
//	std::cin>>filename;
	//std::string searchString;
	std::ifstream file;
	file.open(filename, std::ios::binary);

	if(!file){
		std::cout<<"File is not found";
		std::cout<<"\n";
	}else{
		file.getline(fileRead, 1024, '\0');
		char* expPtr = &fileRead;
		expPtr++;
        if(*(expPtr+1) == 'P' && *(expPtr+2) == 'N' && *(expPtr+3) =='G'){
            bool fil = true;
        }
        expPtr = &filename;
        expPtr = strlen(filename);
        if(*expPtr == 'g' && *(expPtr-1) == 'n' && *(expPtr-2) == 'p' && *(expPtr-3) =='.'){
            bool name = true;
        }
        if(fil && name){
            std::cout<<"It is *.png File";
        }else{
            std::cout<<"It is not *.png file";
        }
            

	}

	file.close();
}
