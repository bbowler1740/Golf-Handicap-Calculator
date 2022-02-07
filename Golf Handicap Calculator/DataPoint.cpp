#include "DataPoint.h"

using namespace std;

DataPoint::DataPoint() {

	this->shotDistance = -1;
	this->club = "";

}

short DataPoint::getShotDistance() {

	return this->shotDistance;

}

std::string DataPoint::getClub() {

	return this->club;

}

void DataPoint::setShotDistance(short shotDistance) {

	this->shotDistance = shotDistance;

}

void DataPoint::setClub(std::string club) {

	this->club = club;

}

void DataPoint::displayPoint() {

	cout << "Shot Distance: " << this->shotDistance << endl;
	cout << "Club Used: " << this->club << endl;

}




