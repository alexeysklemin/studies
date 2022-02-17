#include <iostream>

void InstallingShips(bool installShips [10][10][1]);

void KillingShips(bool installShips [10][10][1]);


int main (){

	bool installShips [10][10][1];
	bool  player;
	
	player = false;
	InstallingShips(installShips);
	player = true;
	InstallingShips(installShips);

}
