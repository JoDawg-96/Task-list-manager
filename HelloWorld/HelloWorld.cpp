#include "Task.h"
#include "Date.h"
#include <iostream>
#include <string>

int main() {
	std::string t;
	std::string p;
	
	Date d = new Date();

	std::cout << "Enter task: ";
	std::cin >> t;
	std::cout << "Enter person: ";
	std::cin >> p;

	std::cout << t << p;
};