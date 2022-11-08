#include <iostream>
#include <fstream>
#include <string>

int main(){

	/*std::string firstPerson = "Tom Hank 34500 01.04.2019";
	std::string secPerson = "Alice Woddecker 56000 09.09.2020";
	std::string thirdPerson = "Woody Alen 45600 09.10.2921";
	std::string forthPerson = "Alex Sklemin 34700 23.07.2022"*/;

	std::string names;
	std::string  salary;
	std::string date;
	std::string person;

	while(true){
	
	person = " ";
	std::getline(std::cin, names);
	std::getline(std::cin, salary);
	std::getline(std::cin, date);

	person = names+' '+salary+' '+date;

	std::ofstream out;
	out.open("words.txt", std::ios::app);

	if(out.is_open()){

		out<<"\n"<<person<<"\n";
	}
	out.close();
   }
}
