/*
 * Course.h
 *
 *  Created on: 15-Apr-2020
 *      Author: sunbeam
 */

#include<string>
using namespace std;
#include<iostream>


struct eligibility {
	string course_name;
	string degree;
	float min_percentage;
};

#ifndef COURSE_H_
#define COURSE_H_

class Center;

class Course {
	int id;
	string name;
	string fees;
	string ccat_section;
	Center *centers;
	eligibility eligibilities;

public:
	Course();
	virtual ~Course();
};

#endif /* COURSE_H_ */
