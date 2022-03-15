#include <iostream>

bool CheckingParams (int coordinates[2][2]){

	if (((coordX0!=coordX1)&&(coordY0!=coordY1))||((coordX0>9)&&(coordX1>9))||((coordY0>9)&&(coordY1>9))){
		return false;
	}
return true;
}

void  InputingCoordSubmarine (int coordinates[2][2]){

	int i=0;
	
	while(i<4){
		std::cout<<"Input coordinates of  "<<i<<" submarin"<<"\n";
		std::cin>>coordinates[0][0]>>coordinates[0][1];
		
		for(int j=0; j<2; ++j){
			for(int k=0; k<2; ++k){
				coordinates[j][k]=coordinates[0][0];
			}
		}
	
	}
++i;
}
	

	for(int i=0; i<4; ++i)void InstallingShips(bool installShips [10][20][1], , int coordinates[2][2], bool player){

	int i = 0;
	int j = 0;
	
	if(!CheckingParams){
		

	if(player){
	j=+10;
	}

	

void KillingShips(bool installShips [10][20][1], bool player);


int main (){

	bool installShips [10][20][1];
	bool  player;
	int coordinates[2][2]

	
	player = false;
	InstallingShips(installShips);
	player = true;
	InstallingShips(installShips);

}
