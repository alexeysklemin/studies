#include <iostream>
#include <fstream>
#include <string>

void defSector (int* sectoRing, int MAX_SECTOR, int &point){
    *sectoRing +=point;
    
    if(*sectoRing>MAX_SECTOR){
        *sectoRing = *sectoRing-MAX_SECTOR;
    }
}

void readindQuastion (int *sectoRing, char quastion[1024]){
    
}


int main(){

	std::string quastion = "quastion.txt";
	std::string answer = "answer.txt";'

	std::string quastionAlone [1][13];
    std::string answerAlone [1][13];
    int sectoRing = 1;
    int MAX_SECTOR = 13;
    int *secPtr = &sectoRing;
    
    

}
