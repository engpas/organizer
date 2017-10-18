#ifndef TIMEPOINT_HPP_INCLUDED
#define TIMEPOINT_HPP_INCLUDED
#include <ctime>
#include <string>
class Timepoint
{
private:
	std::tm time_object;

public:
	//constructors
	Timepoint()
	{
		std::time_t now = std::time(nullptr);
		time_object = *std::localtime(&now);
	}
	Timepoint(const Timepoint& t): time_object(t.time_object) {}

	//getters
	int getSecond();
	int getMinute();
	int getHour();
	int getDay();
	int getMonth();
	int getYear();
	int getWeekday(); //number of days since sunday, i.e. 0=Sunday, 1=Monday, 2=Tuesday, etc.
	std::string getDate();

	//setters
	void setTimeObject(std::tm);

};
#endif
