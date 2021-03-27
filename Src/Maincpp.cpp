#include <iostream>
#include <string>
#include "Log.h"

int main() {

	std::string message;
	std::getline(std::cin >> std::ws, message);
	InitLog();
	LogEach(message);
	Log(message);
	std::cin.get();

}