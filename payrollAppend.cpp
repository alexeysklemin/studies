#include <iostream>
#include <fstream>
#include <string>

int main(){

	bool checkingDate(std::string date){
        if(date.rfind(".")!=4){
            return false
        }
        if(date.find(".")!=2{
            return false
        }
    }

	std::string names;
	std::string  salary;
	std::string date;
	std::string person;
	char command;

	do{
	
	std::cout<<"Input your command: (a - append datas, e - exit programm) ";
	std::getline(std::cin,comm;
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
   while(command=='a');
 
}
