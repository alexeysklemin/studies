
#include <iostream>
#include <vector>

void FillingPlates (bool guests[6][2], bool plates[6][2][3]){
    for(int i=0; i<6; ++i){
        for(int j=0; j<2; ++j){
            for(int p=0; p<3; ++p){
                if(p<2){
                    plates[i][j][p]=true;
                }else{
                    if(guests[i][j]==true){
                        plates[i][j][2]=true;
                    }else{
                        if(guests[i][j]==false){
                            plates[i][j][2]=false;
                        }
                    }
                }
            }
        }
    }
}

void FillingCuterlys (bool guests[6][2], bool cutlerys[6][2][4]){
    for(int i=0; i<6; ++i){
        for(int j=0; j<2; ++j){
            for(int c=0; c<4; ++c){
                if(c<2){
                    cutlerys[i][j][c]=true;
                }else{
                    if(guests[i][j]==true){
                        cutlerys[i][j][3]=true;
                    }else{
                        if(guests[i][j]==false){
                            cutlerys[i][j][3]=false;
                        }
                    }
                }
            }
        }
    }
}



void PrintPlates (bool plates[6][2][3]){
    for(int i=0; i<6; ++i){
        for(int j=0; j<2; j++){
            for(int p=0; p<3; ++p){
                if(plates[i][j][p]==true){
                    std::cout<<"There is plate"<<"\t";
                }else{
                    std::cout<<"There is no plate"<<"\t";
                }
            }
            std::cout<<"\n";
        }
        
    }
    std::cout<<"\n";
}


void PrintCuterlys (bool cutlerys[6][2][4]){
    for(int i=0; i<6; ++i){
        for(int j=0; j<2; j++){
            for(int c=0; c<4; ++c){
                if(cutlerys[i][j][c]==true){
                    std::cout<<"There is cutlery"<<"\t";
                }else{
                    std::cout<<"There is no cutlery"<<"\t";
                }
            }
            std::cout<<"\n";
        }
        
    }
}


void FillingChairs (std::vector <bool> tmpVec, std::vector<std::vector<bool>> chairs){
    for(int i=0; i<2; ++i){
        for(int j=0; j<6; ++j){
            tmpVec.push_back(true);
        }
        chairs.push_back(tmpVec);
    }
}


void PrintChairs (std::vector <bool> tmpVec, std::vector<std::vector<bool>> chairs){
    for(int i=0; i<chairs.size(); ++i){
        for(int j=0; j<tmpVec.size(); ++j){
            std::cout<<tmpVec[j]<<"\t";
        }
        std::cout<<"\n";
    }
}
    


void PrintGuests (bool guests[6][2]){
    for(int i=0; i<6; ++i){
        for(int j=0; j<2; ++j){
            if(guests[i][j]==true){
                std::cout<<"ViP"<<"\t";
            }else{
               
                    std::cout<<"No ViP"<<"\t";
               
            }
        }
        std::cout<<"\n";
    }
    std::cout<<"\n";
}


int main(){
     bool guests [6][2] ={{true, true},
                          {false, false},
                          {false, false},
                          {false, false},
                          {false, false},
                          {false, false}};
                       
  std::vector <bool> tmpVec;
  std::vector <std::vector <bool>> chair;
  bool cutlerys[6][2][4]={};
  bool plates [6][2][3]={};
  
  
  PrintGuests(guests);
  FillingChairs(tmpVec, chair);
  PrintChairs(tmpVec, chair);
  FillingPlates (guests, plates);
  PrintPlates (plates);
  FillingCuterlys (guests, cutlerys);
  PrintCuterlys (cutlerys);

  
 
  
  
}

