#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

int main(){

	std::ifstream file ("words.txt");
	std::string name;
	std::string surname;
	int salary;
	int sum=0;
	int max=0;
	std::string date;
	
	

	file>>name>>surname>>salary>>date;
	while(!file.eof()){
		file>>name>>surname>>salary>>date;

		sum=sum+salary;
		if(salary>max){
			max=salary;
			std::cout<<name<<"\t"<<surname<<"\t"<<max<<"\t"<<date<<"\n";
		}
	}
	
	
	
	std::cout<<"Summ is\t"<<sum<<"\n";
	file.close();
}
