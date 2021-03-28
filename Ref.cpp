#include <iostream>
#define Log(x) std::cout << x << std::endl;


void increment(int* value) {
	(*value)++;
}

void IncLog(int* a) {
	Log(*a);
	increment(a);
}
