#include <iostream>
#include "Log.h"

void InitLog() {
	Log("Log Initializing");
}

void LogMult(const std::string message, const int i) {
	for (int k = 1; k < i; k++) {
		std::cout << message << std::endl;
	}
}

void LogEach(const std::string message) {
	for (int i = 0; i < (signed) message.length(); i++) {
		Log(message[i]);
	}
	LogMult(message, message.length());
}

void Log(const std::string message) {
	std::cout << message << std::endl;
}
void Log(const char symbol) {
	std::cout << symbol << std::endl;
}

