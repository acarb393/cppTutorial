#include "Actor.h"

Actor::Actor()
{

}
Actor::Actor(std::string first, std::string last, int birthYear)
{
	this->first = first;
	this->last = last;
	this->birthYear = birthYear;
}
void Actor::setFirstName(std::string first)
{
	this->first = first;
}
std::string Actor::getFirstName()
{
	return this->first;
}
void Actor::setLastName(std::string last)
{
	this->last = last;
}
std::string Actor::getLastName()
{
	return this->last;
}
void Actor::setBirthYear(int birthYear)
{
	this->birthYear = birthYear;
}
int Actor::getBirthYear()
{
	return this->birthYear;
}
