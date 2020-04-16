/*
 * Center.h
 *
 *  Created on: 15-Apr-2020
 *      Author: sunbeam
 */

#include<string>
#include<iostream>
using namespace std;

#ifndef CENTER_H_
#define CENTER_H_

class Course;

class Center {
	string  id;
	string name;
	string address;
	string coordinator;
	string password;
	Course *courses;
public:
	Center();
	virtual ~Center();
};

#endif /* CENTER_H_ */
