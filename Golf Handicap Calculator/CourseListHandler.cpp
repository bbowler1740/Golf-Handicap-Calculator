#include "CourseListHandler.h"

using namespace std;

void CourseListHandler::saveCourseList(CourseList* courseList) {

	if (FILE_NAME) {
		remove(FILE_NAME);
	}

	std::ofstream saveFile;
	saveFile.open(FILE_NAME);

	if (saveFile.is_open()) {

		for (Course* c : courseList->courseList) {

			saveFile << c->getClubName() << "\n";
			saveFile << c->getCourseName() << "\n";
			saveFile << c->getCoursePar() << "\n";
			saveFile << c->getCourseRating() << "\n";

		}

	}

	saveFile.close();

}

CourseList* CourseListHandler::loadCourseList() {

	CourseList* loadedList = new CourseList();

	std::ifstream loadFile(FILE_NAME);

	std::string clubName;
	std::string courseName;
	std::string readline;
	double coursePar;
	char courseRating;

	//Course objects are saved to file in four consecutive lines.
	//1. Check which line is currently being read.
	//2. Based on the line number, determine which Course object member is being read.
	//3. Reset the line count once a Course object is fully read into program memory.
	int fileLineCount = 1;
	if (loadFile.is_open()) {

		while (getline(loadFile, readline)) {

			if (fileLineCount == 1) {
				clubName = readline;
			}

			else if (fileLineCount == 2) {
				courseName = readline;
			}

			else if (fileLineCount == 3) {
				coursePar = stod(readline);
			}

			else if (fileLineCount == 4) 
				courseRating = (char)stod(readline);
				Course* loadedCourse = new Course(clubName, courseName, coursePar, courseRating);
				loadedList->addCourse(loadedCourse);
				fileLineCount = 0;
			}

			fileLineCount++;

	}

	loadFile.close();

	return loadedList;

}