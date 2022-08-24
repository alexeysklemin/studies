#include <iostream>
#include <string>


bool checkCoordinates(int xb, int yb, int xf, int yf) {

    if ((xb < 0) || (xf < 0) || (yb < 0) || (yf < 0) || (xb > 9) || (xf > 9) || (yb > 9) || (yf > 9)) {
        return false;
    }
    else {
        if (((xf - xb) != 0) && ((yf - yb) != 0)) {
            return false;
        }
        else {
            if (((xf - xb) < 0) && ((yf - yb) < 0)) {
                return false;
            }
        }
    }
    return true;
}


void  initialFillingBoard(bool board[10][10]) {

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            board[i][j] = false;
        }
    }
}


void printBoard(bool installedShips[10][10], bool fireBoard[10][10]) {

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (installedShips[i][j] == true) {
                std::cout << "X" << "\t";
            }
            else {
                std::cout << "O" << "\t";
            }
        }
        std::cout << "\t\t";
        for (int j = 0; j < 10; ++j) {
            if (fireBoard[i][j] == true) {
                std::cout << "X" << "\t";
            }
            else {
                std::cout << "O" << "\t";
            }
        }

        std::cout << "\n";
    }
}


bool defDirection(int xb, int yb, int xf, int yf) {
    if ((xf - xb) == 0) {
        return false;
    }
    else {
        return true;
    }

}


bool checkEngegedDistance(int xb, int yb, int xf, int yf, bool allocBoard[10][10]) {


    if (((allocBoard[yb - 1][xb - 1]) || (allocBoard[yb][xb - 1]) || (allocBoard[yb + 1][xb - 1])) || ((allocBoard[yf - 1][xf + 1]) || (allocBoard[yf][xf + 1]) || (allocBoard[yf + 1][xf + 1]))) {
        std::cout << "The place is engeged" << "\n";
        return false;
    }

    if (((allocBoard[yb - 1][xb - 1]) || (allocBoard[yb - 1][xb]) || (allocBoard[yb - 1][xb + 1])) || ((allocBoard[yf + 1][xf - 1]) || (allocBoard[yf + 1][xf]) || (allocBoard[yf + 1][xf + 1]))) {
        std::cout << "The place is engeged" << "\n";
        return false;
    }


    return true;

}


bool checkEngegedPoint(int xb, int yb, int xf, int yf, bool allocBoard[10][10]) {


    for (int i = xb; i <= xf; ++i) {
        if ((allocBoard[yb][i]) || (allocBoard[yb - 1][i]) || (allocBoard[yb + 1][i])) {
            std::cout << "The point is engeged" << "\n";
            return false;
        }
    }

    for (int j = yb; j <= yf; ++j) {
        if ((allocBoard[j][xb - 1]) || (allocBoard[j][xb]) || (allocBoard[j][xb + 1])) {
            std::cout << "The point is egeged" << "\n";
            return false;
        }
    }

    /*else{
      return false;
    }*/

    return true;
}


void fillingShips(int xb, int yb, int xf, int yf, bool board[10][10]) {
    if (!defDirection(xb, yb, xf, yf)) {
        for (int i = yb; i <= yf; ++i) {
            board[xb][i] = true;
        }
    }
    else {
        for (int i = xb; i <= xf; ++i) {
            board[i][yb] = true;
        }
    }


}


bool checkLegalPoint(bool rsltCheckCoordinates, bool rsltCheckDistance, bool rsltCheckPoints) {
    if (rsltCheckCoordinates && rsltCheckDistance && rsltCheckPoints) {
        return true;
    }
    return false;
}

bool fireFunction(int x, int y, bool allocBoard[10][10], bool fireBoard[10][10]) {
    if (fireBoard[x][y] != true) {
        fireBoard[x][y] = true;
        if (allocBoard[x][y] == true) {
            std::cout << "Good shoot" << "\n";
            return true;
        }
    }
    return false;
}


void sunkShip(int x, int y, bool allocBoard[10][10], bool fireBoard[10][10]) {
    int countA = 0;
    int countF = 0;
    for (int i = 0; i < 10; ++i) {
        if ((fireBoard[i][y]==allocBoard[i][y])&&(allocBoard[i][y])) {
            countA++;
            countF++;
        }
       
     }
    if (countF == countA) {

        std::cout << "Sunk"<<std::endl;

    }

    

}



int main() {
    int xb, xf, yb, yf, x, y;
    bool allocationShipsPlayerA[10][10] = {};
    bool allocationShipsPlayerB[10][10] = {};
    bool fireCoordinatesPlayerA[10][10] = {};
    bool fireCoordinatesPlayerB[10][10] = {};
    int ships[4] = { 1,2,3,4 };
    std::string Ships[] = { "batleship", "destroyer", "cruiser", "submarine" };

    initialFillingBoard(allocationShipsPlayerA);
    initialFillingBoard(allocationShipsPlayerB);


    for(int i=3; i>=0; --i){

      while(ships[i]!=0){
        std::cout<<"Enter coordinates of your "<<Ships[i]<<"\t";
        std::cin>>xb>>yb>>xf>>yf;
        bool rsltCheckCoordinates = checkCoordinates(xb,yb,xf,yf);
        bool rsltCheckDistance =             checkEngegedDistance(xb,yb,xf,yf,allocationShipsPlayerA);
        bool rsltCheckPoints = checkEngegedPoint(xb,yb,xf,yf,allocationShipsPlayerA);
        if(checkLegalPoint(rsltCheckCoordinates,rsltCheckDistance,rsltCheckPoints)){
          if(i==3){
                xf=xb;
                yf=yb;
          }
          fillingShips(xb,yb,xf,yf,allocationShipsPlayerA);
          printBoard(allocationShipsPlayerA,fireCoordinatesPlayerA);
        ships[i]--;
      }else{
          ships[i]=ships[i];
      }
    }
  }



    for(int i=3; i>=0; --i){

      while(ships[i]!=0){
        std::cout<<"Enter coordinates of your "<<Ships[i]<<"\t";
        std::cin>>xb>>yb>>xf>>yf;
        bool rsltCheckCoordinates = checkCoordinates(xb,yb,xf,yf);
        bool rsltCheckDistance =             checkEngegedDistance(xb,yb,xf,yf,allocationShipsPlayerB);
        bool rsltCheckPoints = checkEngegedPoint(xb,yb,xf,yf,allocationShipsPlayerB);
        if(checkLegalPoint(rsltCheckCoordinates,rsltCheckDistance,rsltCheckPoints)){
          if(i==3){
                xf=xb;
                yf=yb;
          }
          fillingShips(xb,yb,xf,yf,allocationShipsPlayerB);
          printBoard(allocationShipsPlayerA,fireCoordinatesPlayerB);
        ships[i]--;
      }else{
          ships[i]=ships[i];
      }
    }
  } 


    std::cout << "\n Input your fires coordinates" << "\t";
    std::cin >> x >> y;

    printBoard(allocationShipsPlayerA, fireCoordinatesPlayerB);
    std::cout << std::endl;

    fireFunction(x, y, allocationShipsPlayerA, fireCoordinatesPlayerB);
    printBoard(allocationShipsPlayerB, fireCoordinatesPlayerB);
    sunkShip(x, y, allocationShipsPlayerA, fireCoordinatesPlayerB);
