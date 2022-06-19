#include "Task.h"
#include "Date.h"
#include <string>

class Task {
public:
	std::string name;
	Date date;
	std::string person;

	Task() {
		name = "";
		date = new Date();
		person = "";
	}
};