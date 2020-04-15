/*
 * AdmissionSystem.h
 *
 *  Created on: 15-Apr-2020
 *      Author: sunbeam
 */



#include "Course.h"
#include "Center.h"
#include "Student.h"
#include<string>
#include<iostream>
using namespace std;

#ifndef ADMISSIONSYSTEM_H_
#define ADMISSIONSYSTEM_H_

struct Capacities {
	string center_id;
	string center_name;
	int Capacity;
	int filled_capacity;
};

class AdmissionSystem {
	Center centers;
	Course courses;
	Student students;
	string degrees;
	Capacities capacities;
public:
	AdmissionSystem();
	virtual ~AdmissionSystem();
};

#endif /* ADMISSIONSYSTEM_H_ */
