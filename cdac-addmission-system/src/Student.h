/*
 * Student.h
 *
 *  Created on: 15-Apr-2020
 *      Author: sunbeam
 */

#include<string>
#include<iostream>
using namespace std;

#ifndef STUDENT_H_
#define STUDENT_H_

class Student {
	int id;
	string name;
	int rank_a;
	int rank_b;
	int rank_c;
	string degree;
	float degree_marks;
	string course_name;
	int center_id;
	float payment;
	int reported;
	string prn;
	int peference;
public:
	Student();
	virtual ~Student();
};

#endif /* STUDENT_H_ */
