#include "Movie.h"

Movie::Movie()
{
}

Movie::Movie(int duration, int year, int numActors, double price, std::string title)
{
	this->duration = duration;
	this->numActors = numActors;
	this->price = price;
	this->title = title;
	this->year = year;
	if (numActors <= 0)
		this->actors = nullptr;
	else
		this->actors = new Actor[this->numActors];
}

Movie::~Movie()
{
	this->actors = nullptr;
	delete(this->actors);
}

void Movie::setMovieTime(int duration)
{
	this->duration = duration;
}
int Movie::getMovieTime()
{
	return this->duration;
}
void Movie::setMovieYearOut(int year)
{
	this->year = year;
}
int Movie::getMovieYearOut()
{
	return this->year;
}
void Movie::setNumberOfActors(int numActors)
{
	this->numActors = numActors;
}
int Movie::getNumberOfActors()
{
	return this->numActors;
}
void Movie::addActor(std::string firstName, std::string lastName, int yearBirth)
{
	Actor newActor = Actor(firstName, lastName, yearBirth);
	if (this->actors == nullptr)
	{
		this->numActors = 1;
		this->actors = new Actor[1];
		this->actors[0] = newActor;
	}
	else
	{
		for (int i = 0; i < this->numActors; i++)
		{
			if ((this->actors + i)->getFirstName() == "")
			{
				*(this->actors + i) = newActor;
				return;
			}
		}

		Actor* newActors = new Actor[this->numActors + 1];
		for (int i = 0; i < this->numActors; i++)
		{
			newActors[i] = *(this->actors + i);
		}

		newActors[this->numActors] = newActor;
		this->numActors++;
		this->actors = nullptr;
		delete(this->actors);
		this->actors = newActors;
	}
}
void Movie::setMoviePrice(double price)
{
	this->price = price;
}
double Movie::getMoviePrice()
{
	return this->price;
}
void Movie::setMovieTitle(std::string title)
{
	this->title = title;
}
std::string Movie::getMovieTitle()
{
	return this->title;
}
void Movie::printMovieInfo()
{
	
}


