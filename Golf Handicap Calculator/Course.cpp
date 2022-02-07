#include "Course.h"

using namespace std;


Course::Course() {

	this->clubName = "";
	this->courseName = "";
	this->coursePar = 0;
	this->courseRating = 0.00;

}

Course::Course(std::string clubName, std::string courseName, double courseRating, char coursePar) {

	this->clubName = clubName;
	this->courseName = courseName;
	this->courseRating = courseRating;
	this->coursePar = coursePar;

}

void Course::setCourseName(std::string courseName) {

	this->courseName = courseName;

}

void Course::setClubName(std::string clubName) {

	this->clubName = clubName;

}

void Course::setCourseRating(double courseRating) {

	this->courseRating = courseRating;

}

void Course::setCoursePar(char coursePar) {

	this->coursePar = coursePar;

}

std::string Course::getCourseName() {

	return this->courseName;

}

std::string Course::getClubName() {

	return this->clubName;

}

double Course::getCourseRating() {

	return this->courseRating;

}

char Course::getCoursePar() {

	return this->coursePar;

}

void Course::displayCourse() {

	cout << "Course Name: " << this->courseName << endl;
	cout << "Club Name: " << this->clubName << endl;
	cout << "Course Par: " << int (this->coursePar) << endl;
	cout << "Course Rating: " << this->courseRating << endl;

}
