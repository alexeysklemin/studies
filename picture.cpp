#include <iostream>
#include <fstream> 
#include <ctime>
#include <string>

int main() {
  int pic[1000][1000];
  int sizeX, sizeY;
  std::cin>>sizeX>>sizeY;
  std::string filename ("pic.txt");
  std::ofstream file;
  file.open(filename);
  std::srand(std::time(nullptr));
  
  for(int i=0; i<sizeX; ++i){
    
    for(int j=0; j<sizeY; ++j){
     
      pic[i][j] = std::rand()%2;
    }

  }
  for(int i=0; i<sizeX; ++i){
    for(int j=0; j<sizeY; ++j){

      std::cout<<pic[i][j];
      file<<pic[i][j];
      
    }
    std::cout<<"\n";
    file<<"\n";
  }
 
  file.close();
} 
