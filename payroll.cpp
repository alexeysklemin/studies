#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

int main(){

	std::ifstream file ("words.txt");
	std::string name;
	std::string surname;
	int salary;
	std::string date;

	file>>name>>surname>>salary>>date;

	std::cout<<salary;

}
