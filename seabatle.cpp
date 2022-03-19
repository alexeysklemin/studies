#include <iostream>

bool CheckCoordinates (int xb, int xf, int yb, int yf){

	if((xb<0)||(xf<0)||(yb<0)||(yf<0)||(xb>9)||(xf>9)||(yb>9)||(yf>9)){
		return false;
	}else{
		if(((xf-xb)!=0)&&((yf-yb)!=0)){
			return false;
		}
	}
	return true;
}


bool CheckEngeged (int xb, int xf, int yb, int yf, bool installShips[10][10]){

	int x=xf-xb;
	int y=yf-yb;
	int b=0;
	int f=0;
	
	if(x==0){
		b=yb;
		f=yf;
		for(int i=f; i>b; --i){
			if(installShips[xb][i]==true){
				std::cout<<"You can't put ship here. This point is engeged";
				return false;
			}
		}
	}else{
		if(y==0){
			b=xb;
			f=xf;
			for(int i1=f; i1>b; --i1){
				if(installShips[i1][yb]==true){
					std::cout<<"You can't put ship here. This point is engeged";
					return false;
				}
			}
		}
	}
	

	return true;
} 


int main (){

	bool installShipsPlayerA  [10][10];
	bool installShipPlayerB [10][10];
	bool fireCoordinatesPlayerA [10][10];
	bool fireCoordinatesPlayerB [10[10];
	int ships [4] = {1,2,3,4};
	int  xb, xf, yb, yf;

	
	

}
