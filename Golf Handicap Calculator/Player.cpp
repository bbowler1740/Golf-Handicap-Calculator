#include "Player.h"

using namespace std;

Player::Player() {

	this->firstName = "";
	this->lastName = "";
	this->handicap = -100.00;

}

Player::Player(std::string firstName, std::string lastName, double handicap) {

	this->firstName = firstName;
	this->lastName = lastName;
	this->handicap = handicap;

}

void Player::setFirstName(std::string firstName) {

	this->firstName = firstName;

}

void Player::setLastName(std::string lastName) {

	this->lastName = lastName;

}
void Player::setHandicap(double handicap) {

	this->handicap = handicap;

}

std::string Player::getFirstName() {

	return this->firstName;

}

std::string Player::getLastName() {

	return this->lastName;

}

double Player::getHandicap() {

	return this->handicap;

}

void Player::displayPlayer() {

	cout << "First Name: " << this->getFirstName() << endl;
	cout << "Last Name: " << this->getLastName() << endl;
	cout << "Handicap: " << this->getHandicap() << endl;

}


