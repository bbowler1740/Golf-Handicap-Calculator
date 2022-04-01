#include "Player.h"

using namespace std;

/// <summary>
/// Safestate default Player constructor.
/// </summary>
Player::Player() {

	this->firstName = "Unset";
	this->lastName = "Unset";
	this->handicap = NULL;

}

/// <summary>
/// Parameterized Player constructor.
/// </summary>
/// <param name="firstName">Player's first name.</param>
/// <param name="lastName">Player's last name.</param>
/// <param name="handicap">Player's handicap.</param>
Player::Player(std::string firstName, std::string lastName, double handicap) {

	this->firstName = firstName;
	this->lastName = lastName;
	this->handicap = handicap;

}

/// <summary>
/// Sets the Player object's first name member to the string value.
/// </summary>
/// <param name="firstName">Updated player's first name.</param>
void Player::setFirstName(std::string firstName) {

	this->firstName = firstName;

}

/// <summary>
/// Sets the Player object's last name member to the string value.
/// </summary>
/// <param name="lastName">Updated player's last name.</param>
void Player::setLastName(std::string lastName) {

	this->lastName = lastName;

}

/// <summary>
/// Sets the Player object's handicap member to the double value.
/// </summary>
/// <param name="handicap">Updated player's handicap.</param>
void Player::setHandicap(double handicap) {

	this->handicap = handicap;

}

/// <summary>
/// Returns the Player object's first name member as a string.
/// </summary>
/// <returns>Player object's first name.</returns>
std::string Player::getFirstName() {

	return this->firstName;

}

/// <summary>
/// Returns the Player object's last name member as a string.
/// </summary>
/// <returns>Player object's last name.</returns>
std::string Player::getLastName() {

	return this->lastName;

}

/// <summary>
/// Returns the Player object's handicap as a double.
/// </summary>
/// <returns>Player object's handicap.</returns>
double Player::getHandicap() {

	return this->handicap;

}

/// <summary>
/// Displays the member values of a Player object to the console.
/// </summary>
void Player::displayPlayer() {

	cout << "First Name: " << this->getFirstName() << endl;
	cout << "Last Name: " << this->getLastName() << endl;
	cout << "Handicap: " << this->getHandicap() << endl;

}


