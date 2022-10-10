#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

int main(){

	std::ifstream file ("words_t.txt");
	std::string name;
	std::string surname;
	int salary;
	int sum=0;
	int max=0;
	std::string date;
	std::string winer;
	
	

	//file>>name>>surname>>salary>>date;
	while(!file.eof()){
		salary=0;
		file>>name>>surname>>salary>>date;

		sum=sum+salary;
		if(salary>max){
			max=salary;
			winer = name+" "+surname+" "+std::to_string(max)+" "+date;
		}
	}
	
	
	
	std::cout<<"Summ is\t"<<sum<<"\t"<<winer<<"\n";
	file.close();
}
