#include "Date.h"
class Date {
public:
	int day{};
	int month{};
	int year{};

	Date() {
		day = 1;
		month = 1;
		year = 2000;
	}

	Date(int d, int m, int y) {
		day = d;
		month = m;
		year = y;
	}
};