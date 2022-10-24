#include <iostream>
#include <fstream>
#include <string>

void defSector (int* sectoRing, int MAX_SECTOR, int &point){
    *sectoRing +=point;
    
    if(*sectoRing>MAX_SECTOR){
        *sectoRing = *sectoRing-MAX_SECTOR;
    }
}

void readindQuastion ( std::string* quastionAlone){
    std::fstream(fileQ);
    fileQ.open("quastion.txt");
	if(!fileQ){
		std::cout<<"file is not found";
	}else{
    int count =0;
	char  quastion[128];
    if(fileQ){
        while(!fileQ.eof()){
            fileQ.getline(quastion, 128, '\0');
		quastionAlone[count]=quastion;
            count++;
        }
    }
  }
fileQ.close();
}

void readindAnswer ( std::string*  answerAlone){
    std::fstream(fileA);
    fileA.open("answer.txt");
    if(!fileA){
	std::cout<<"file is not found";
	}else{
		int count =0;
        char answer[128];
    if(fileA){
        while(!fileA.eof()){
            fileA.getline(answer, 128, '\0');
            answerAlone[count]=answer;
            count++;
        }
    }
  }
fileA.close();
}
int main(){
    
    std::string quastionAlone [13];
    std::string answerAlone [13];

    int sectoRing = 1;
    int MAX_SECTOR = 13;
    int point =1;
    
    int *secPtr = &sectoRing;
    
    defSector (&sectoRing, MAX_SECTOR, point);
    readindQuastion  (quastionAlone);
    readindAnswer (answerAlone);
    
    
    std::cout<<quastionAlone[point]<<"\t"<<answerAlone[point]<<"\n";
    
    

}
