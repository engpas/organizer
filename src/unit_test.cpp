#include <iostream>
#include "entry.hpp"
#include "timepoint.hpp"

int main()
{
	Timepoint t;
	std::cout << t.getDate() << std::endl;

	Entry e ("Title of the entry", "Text body that the entry contains.", "Tests");

	return 0;
}
