#pragma once
#include <string>
#include <iostream>
#include "Actor.h"

class Movie
{
private:

	int duration = 0;
	int year = 0;
	int numActors = 0;
	double price = 0.0;
	std::string title = "";
public:
	Actor* actors = nullptr;
	Movie();
	Movie(int duration, int year, int numActors, double price, std::string title);
	~Movie();
	void setMovieTime(int duration);
	int getMovieTime();
	void setMovieYearOut(int year);
	int getMovieYearOut();
	void setNumberOfActors(int numActors);
	int getNumberOfActors();
	void addActor(std::string firstName, std::string lastName, int yearBirth);
	void setMoviePrice(double price);
	double getMoviePrice();
	void setMovieTitle(std::string title);
	std::string getMovieTitle();
	void printMovieInfo();
};

