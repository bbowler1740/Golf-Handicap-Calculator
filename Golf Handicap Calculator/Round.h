#pragma once
#include "Course.h"

using namespace std;

class Round {

private:

	Course* playedCourse = new Course();
	char score;
	char dayPlayed;
	char monthPlayed;
	short yearPlayed;

public:

	Round();
	Round(Course*, char, char, char, short);



	void setCourse(Course*);
	void setScore(char);
	void setDayPlayed(char);
	void setMonthPlayed(char);
	void setYearPlayed(short);

	Course* getCourse();
	char getScore();
	char getDayPlayed();
	char getMonthPlayed();
	short getYearPlayed();

	void displayRound();


};
