#include "Course.h"

using namespace std;

/// <summary>
/// Safestate default Course constructor.
/// </summary>
Course::Course() {

	this->clubName = "Unset";
	this->courseName = "Unset";
	this->coursePar = NULL;
	this->courseRating = NULL;

}

/// <summary>
/// Parameterized Course constructor.
/// </summary>
/// <param name="clubName">The club the Course belongs to, if applicable.</param>
/// <param name="courseName">The name of the Course.</param>
/// <param name="courseRating">Rating of the course.</param>
/// <param name="coursePar">Par of the course.</param>
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
