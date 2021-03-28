#include <iostream>
#include "Log.h"


void InitLog() {
	Log("Log Initializing");
}

void LogEach(const std::string message, int repitition) {
	for (int i = 0; i < (signed)message.length(); i++) {
		Log(message[i]);
	}
	Repeat(message, repitition);
}

void Repeat(const std::string message, const int i) {
	for (int k = 0; k < i; k++) {
		std::cout << message << std::endl;
	}
}

void Log(const std::string message) {
	std::cout << message << std::endl;
}

void Log(const char symbol) {
	std::cout << symbol << std::endl;
}
