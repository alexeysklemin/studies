#include <iostream>
#include <fstream>
#include <string>

void defSector (int* sectoRing, int MAX_SECTOR, int &point){
    *sectoRing +=point;
    
    if(*sectoRing>MAX_SECTOR){
        *sectoRing = *sectoRing-MAX_SECTOR;
    }
}

void readindQuastion (int *sectoRing, char* quastionAlone){
    std::fstream(fileQ);
    fileQ.open("quastion.txt");
    int count =0;
    if(fileQ){
        while(!fileQ.eof()){
            read();
            count++;
        }
    }
    
}

void readindQuastion (int *sectoRing, char* answerAlone){
    std::fstream(fileA);
    fileA.open("answer.txt");
    int count =0;
    if(fileQ){
        while(!fileA.eof()){
            read();
            count++;
        }
    }
    
}
int main(){
    
    std::string quastionAlone [13];
    std::string answerAlone [13];

    int sectoRing = 1;
    int MAX_SECTOR = 13;
    
    int *secPtr = &sectoRing;
    
    

}
