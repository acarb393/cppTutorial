#pragma once
#include <string>
#include <iostream>

class Actor
{
private:
	std::string first = "";
	std::string last = "";
	int birthYear = 0;
public:
	Actor();
	Actor(std::string first, std::string last, int birthYear);
	void setFirstName(std::string first);
	std::string getFirstName();
	void setLastName(std::string last);
	std::string getLastName();
	void setBirthYear(int birthYear);
	int getBirthYear();
};

