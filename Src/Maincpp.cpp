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
	
	void prompt() {
		if (this->talking) {
			std::getline(std::cin >> std::ws, this->message);
			Repeat();
		}
	}
private:
	int repitition;
	std::string message;

	void Repeat() {
		InitLog();
		Log(message);
		LogEach(message, repitition);
		if (message == "bye") {
			this->talking = false;
		}
	}
};

int main() {

	CopyCat cc1(5);
	while (cc1.talking){
		cc1.prompt();
	}
}