#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Course.h"

using namespace std;

class CourseList {

	friend class CourseListHandler;

private:

	std::vector<Course*> courseList;

public:

	void addCourse(Course*);
	void removeCourse(Course*);
	void displayCourseList();

};

