#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Course.h"
#include "CourseList.h"

#define FILE_NAME "courseFile.txt"

using namespace std;

class CourseListHandler {

private:

public:

	static void saveCourseList(CourseList*);
	static CourseList* loadCourseList();

};

