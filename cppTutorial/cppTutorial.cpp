// cppTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Movie.h"


int main()
{
    std::cout << "Hello World!\n";
    
    Movie dogs = Movie(2, 2000, 3, 14.50, "dogs");
    dogs.addActor("Alex", "Carb", 1975);
    dogs.addActor("Gaby", "Carb", 2002);
    dogs.addActor("Sebas", "Carb", 2002);
    dogs.addActor("Cris", "Carb", 1976);
}