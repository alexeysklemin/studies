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
	
	while(!file.eof()){

	file>>name>>surname>>salary>>date;
	
	sum=sum+salary;

	if(salary>max){
		max=salary;
	}

	}
	
	std::cout<<max<<"\t"<<sum<<"\n";

}
