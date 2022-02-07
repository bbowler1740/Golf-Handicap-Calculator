#include "Round.h"

using namespace std;

Round::Round() {

	this->playedCourse = new Course();
	this->score = 0;
	this->dayPlayed = 1;
	this->monthPlayed = 1;
	this->yearPlayed = 1;

}

Round::Round(Course* course, char score, char dayPlayed, char monthPlayed, short yearPlayed) {

	this->playedCourse = course;
	this->score = score;
	this->dayPlayed = dayPlayed;
	this->monthPlayed = monthPlayed;
	this->yearPlayed = yearPlayed;

}

void Round::setCourse(Course* course) {

	this->playedCourse = course;

}

void Round::setScore(char score) {

	this->score = score;

}

void Round::setDayPlayed(char dayPlayed) {

	this->dayPlayed = dayPlayed;

}

void Round::setMonthPlayed(char monthPlayed) {

	this->monthPlayed = monthPlayed;

}

void Round::setYearPlayed(short yearPlayed) {

	this->yearPlayed = yearPlayed;

}

Course* Round::getCourse() {

	return this->playedCourse;

}

char Round::getScore() {

	return this->score;

}

char Round::getDayPlayed() {

	return this->dayPlayed;

}

char Round::getMonthPlayed() {

	return this->monthPlayed;

}

short Round::getYearPlayed() {

	return this->yearPlayed;

}

void Round::displayRound() {

	cout << "This round was played at:" << endl;
	this->playedCourse->displayCourse();
	cout << "On: " << int(this->monthPlayed) << "/" << int(this->dayPlayed) << "/" << this->yearPlayed << endl;

}