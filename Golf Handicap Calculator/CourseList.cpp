#include "CourseList.h"

using namespace std;

void CourseList::addCourse(Course* course) {

	this->courseList.push_back(course);

}

void CourseList::removeCourse(Course* course) {

	int iterationCount = 0;
	for (Course* c : this->courseList) {

		if (c == course) {

			this->courseList.erase(courseList.begin() + iterationCount);
			return;
		}

		iterationCount++;

	}

}

void CourseList::displayCourseList() {

	for (Course* c : this->courseList) {

		c->displayCourse();

	}

}