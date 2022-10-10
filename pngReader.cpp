#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

int main(){
	char fileRead[1024];
	std::string  filename;


	filename = "liza.png";
//	std::cout<<"Input your file's path ";
//	std::cin>>filename;
	//std::string searchString;
	bool fil = false;
	bool name = false;
	int i = 0;
	std::ifstream file;
	file.open(filename, std::ios::binary);

	if(!file){
		std::cout<<"File is not found";
		std::cout<<"\n";
	}else{
		file.getline(fileRead, 1024, '\0');
		char* expPtr = fileRead;
		expPtr++; 
	
        if(*(expPtr) == 'P' && *(expPtr+1) == 'N' && *(expPtr+2) =='G'){
           fil = true;
        }
	std::cout<<fil<<"\n";
        int rfil = filename.rfind(".png");
	 std::cout<<rfil<<"\n";
        if(rfil<5){
            name = true;
        }
        if(fil && name){
            std::cout<<"It is *.png File";
        }else{
            std::cout<<"It is not *.png file";
        }
            

	}

	file.close();
}
