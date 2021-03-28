#include <iostream>
#include <string>
#include "Log.h"

class CopyCat {
public:
	bool talking;

	CopyCat(int repitition) {
		this->repitition = repitition;
		this->talking = true;
	}
	
	void intro() {
		std::cout << "Hello!!!" << std::endl;
	}

	void prompt() {
		if (this->talking) {
			std::getline(std::cin >> std::ws, this->message);
			Repeat();
		}
	}

	void inc() {
		IncLog(repPtr);
	}
private:
	int repitition;
	int* repPtr = &repitition;
	std::string message;

	void Repeat() {
		InitLog();
		Log(message);
		LogEach(message, repitition);
		if (message == "BYE") {
			this->talking = false;
		}
	}
};

int main() {

	CopyCat cc1(1);
	cc1.intro();
	while (cc1.talking){
		cc1.prompt();
		cc1.inc();
	}
}