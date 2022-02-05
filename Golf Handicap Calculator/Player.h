#pragma once

#include <iostream>
#include <string>

using namespace std;

class Player {

private:

	std::string firstName;
	std::string lastName;
	double handicap;

public:

	Player();
	Player(std::string, std::string, double);

	void setFirstName(std::string);
	void setLastName(std::string);
	void setHandicap(double);

	std::string getFirstName();
	std::string getLastName();
	double getHandicap();

	void displayPlayer();

};
