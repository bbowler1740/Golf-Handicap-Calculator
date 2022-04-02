#include <iostream>
#include "Course.h"
#include "CourseList.h"
#include "CourseListHandler.h"
#include "Player.h"
#include "PlayerList.h"
#include "PlayerListHandler.h"
#include "Round.h"

int main()
{
   //Player, PlayerList, PlayerListHandler
	/*Player* p = new Player("Brayden", "Bowler", 7.50);
	Player* p2 = new Player("Harrison", "Bowler", 25.00);

	p->displayPlayer();

	cout << p2->getFirstName() << endl;
	cout << p2->getLastName() << endl;
	cout << p2->getHandicap() << endl;

	Player* p3 = new Player();

	p3->setFirstName("Nigel");
	p3->setLastName("Bowler");
	p3->setHandicap(15.00);

	p3->displayPlayer();


	PlayerList* playerList = new PlayerList();
	playerList->addPlayer(p);
	playerList->addPlayer(p2);

	playerList->displayPlayerList();

	playerList->removePlayer(p2);

	playerList->displayPlayerList();

	playerList->addPlayer(p2);

	PlayerListHandler::savePlayerList(playerList);

	PlayerList* newPlayerList = PlayerListHandler::loadPlayerList();*/

	//Course, CourseList, CourseListHandler

	//string courseName = "The Heathlands";
	//string clubName = "Osprey Valley";
	//char coursePar = 72;
	//double courseRating = 73.8;

	//Course* anotherNewCourse = new Course(courseName, clubName, courseRating, coursePar);
	////anotherNewCourse->displayCourse();

	//Course* newCourse = new Course();
	//courseName = "Savannah Golf Links";
	//clubName = "N/A";
	//coursePar = 71;
	//courseRating = 69.4;

	//newCourse->setCourseName(courseName);
	//newCourse->setClubName(clubName);
	//newCourse->setCourseRating(courseRating);
	//newCourse->setCoursePar(coursePar);

	////newCourse->displayCourse();

	//CourseList* courseList = new CourseList();
	//courseList->addCourse(anotherNewCourse);
	//courseList->addCourse(newCourse);

	//courseList->displayCourseList();

	//courseList->removeCourse(anotherNewCourse);

	//courseList->displayCourseList();

	//courseList->addCourse(anotherNewCourse);

	//CourseListHandler::saveCourseList(courseList);

	CourseList* newCourseList = CourseListHandler::loadCourseList();

	newCourseList->displayCourseList();

	//Round

	/*string courseName = "The Heathlands";
	string clubName = "Osprey Valley";
	char coursePar = 72;
	double courseRating = 73.8;

	Course* anotherNewCourse = new Course(courseName, clubName, courseRating, coursePar);

	Course* playedCourse = new Course();
	char score = 70;
	char dayPlayed = 3;
	char monthPlayed = 6;
	short yearPlayed = 2021;

	Round* myOtherRound = new Round(playedCourse, score, dayPlayed, monthPlayed, yearPlayed);

	Round* myOtherOtherRound = new Round(anotherNewCourse, score, dayPlayed, monthPlayed, yearPlayed);

	Round* round = new Round();

	round->displayRound();
	myOtherRound->displayRound();
	myOtherOtherRound->displayRound();*/


	return 0;
}
