#pragma once

#include <iostream>
#include <string>

using namespace std;

class Course {

private:

	std::string courseName;
	std::string clubName;
	double courseRating;
	char coursePar; //Never going to be greater than 255.

public:

	Course();
	Course(std::string, std::string, double, char);

	void setCourseName(std::string);
	void setClubName(std::string);
	void setCourseRating(double);
	void setCoursePar(char);

	std::string getCourseName();
	std::string getClubName();
	double getCourseRating();
	char getCoursePar();

	void displayCourse();

};

