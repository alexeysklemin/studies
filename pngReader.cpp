#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

int main(){
	char fileRead[8];
	std::string  filename;


//	filename = "liza.png";
	std::cout<<"Input your file's path ";
	std::cin>>filename;
	
	bool fil = false;
	bool name = false;
	int i = 0;
	std::ifstream file;
	file.open(filename, std::ios::binary);

	if(!file){
		std::cout<<"File is not found";
		std::cout<<"\n";
	}else{
		file.getline(fileRead, 8, '\0');
		char* expPtr = fileRead;
		
	std::cout<<*(expPtr+3)<<"\n"; 
	std::cout<<(int)*expPtr<<"\t"<<*(expPtr+1)<<"\t"<<*(expPtr+2)<<"\t"<<*(expPtr+3)<<"\n";
        if(*(expPtr+1) == 'P' && *(expPtr+2) == 'N' && *(expPtr+3) =='G' && (int)*expPtr == -119){
           fil = true;
        }
	
        int rfil = filename.rfind(".png");

        if(rfil<5){
            name = true;
        }
	
        if(fil && name){
            std::cout<<"It is *.png File\n";
        }else{
            std::cout<<"It is not *.png file\n";
        }
            

	}

	file.close();
}
