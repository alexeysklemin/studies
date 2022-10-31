#include <iostream>
#include <fstream>
#include <string>

void defSector (int* sectoRing, int MAX_SECTOR, int &point){
    *sectoRing +=point;
    
    if(*sectoRing>MAX_SECTOR){
        *sectoRing = *sectoRing-MAX_SECTOR;
    }
}

void readindQuastion (std::string  *quastionAlone){
    std::fstream(fileQ);
    fileQ.open("quastion.txt");
	if(!fileQ){
		std::cout<<"file is not found";
	}else{
    int count =0;
	char  quastion[128];
    if(fileQ){
        while(!fileQ.eof()){
            fileQ.getline(quastion, 128);
            quastionAlone[count]=quastion;
            count++;
        }
    }
  }
fileQ.close();
}

void readindAnswer (std::string *answerAlone){
    std::fstream(fileA);
    fileA.open("answer.txt");
    if(!fileA){
	std::cout<<"file is not found";
	}else{
		int count =0;
        char answer[128];
    if(fileA){
        while(!fileA.eof()){
            fileA.getline(answer, 128);
           answerAlone[count]=answer;
            count++;
        }
    }
  }
fileA.close();
}

bool checkSectors(int *sectors){
  bool out;
  for(int i=0; i<13; ++i){
    if(sectors[i]==1){
      out&=1;
    }
    
  }
  return out;
}

int main(){
    
    std::string  quastionAlone [13] = {};
    std::string  answerAlone [13] = {};

    int sectoRing = 1;
    int MAX_SECTOR = 13;
    std::string Point;
    
    int *secPtr = &sectoRing;
    int sectors[13];
    std::string answer;
    
    readindQuastion  (quastionAlone);
    readindAnswer (answerAlone);
    
    while(true){

    std::cout<<"Input point ";
    std::getline (std::cin, Point);
    int point = std::stoi(Point);

    defSector (&sectoRing, MAX_SECTOR, point);
    *secPtr = sectoRing;
    
    std::cout<<"You've got this question"<<std::endl;
    std::cout<<quastionAlone[*secPtr]<<std::endl;
    std::cout<<"\n";

 

   std::cout<<"Put your answer ";
   std::getline (std::cin, answer);
  
  std::cout<<std::endl;
  
  
  std::cout<<"\n";
  
   if (answerAlone[*secPtr] == answer){
     std::cout<<"You are right";
     sectors[*secPtr]+=1;
   }else{
     std::cout<<"You are wrong";
     if(!checkSectors(sectors)) return  0;
     }
  

}
    

}
