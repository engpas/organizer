#include "timepoint.hpp"

int Timepoint::getSecond()
{
	return time_object.tm_sec;
}

int Timepoint::getMinute()
{
	return time_object.tm_min;
}

int Timepoint::getHour()
{
	return time_object.tm_hour;
}

int Timepoint::getDay()
{
	return time_object.tm_mday;
}

int Timepoint::getMonth()
{
	return time_object.tm_mon+1;
}

int Timepoint::getYear()
{
	return time_object.tm_year+1900;
}

int Timepoint::getWeekday()
{
	return time_object.tm_wday;
}

std::string Timepoint::getDate()
{
	std::string return_string;
	if(getWeekday() == 0)
		return_string = "Sunday";
	else if(getWeekday() == 1)
		return_string = "Monday";
	else if(getWeekday() == 2)
		return_string = "Tuesday";
	else if(getWeekday() == 3)
		return_string = "Wednesday";
	else if(getWeekday() == 4)
		return_string = "Thursday";
	else if(getWeekday() == 5)
		return_string = "Friday";
	else if(getWeekday() == 6)
		return_string = "Saturday";

	int hour = getHour();
	std::string hour_string;
	if(hour < 10)
		hour_string = std::to_string(0)+std::to_string(hour);
	else
		hour_string = std::to_string(hour);

	int minute = getMinute();
	std::string minute_string;
	if(minute < 10)
		minute_string = std::to_string(0)+std::to_string(minute);
	else
		minute_string = std::to_string(minute);

	int second = getSecond();
	std::string second_string;
	if(second < 10)
		second_string = std::to_string(0)+std::to_string(second);
	else
		second_string = std::to_string(second);

	return_string += " " + std::to_string(getDay());
	return_string += "." + std::to_string(getMonth());
	return_string += "." + std::to_string(getYear());
	return_string += " " + hour_string;
	return_string += ":" + minute_string;
	return_string += ":" + second_string;

	return return_string;
}
