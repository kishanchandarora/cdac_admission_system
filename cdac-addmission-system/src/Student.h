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
	int preference;
	string course_name;
	string center_id;
	float payment;
	int reported;
	string prn;

public:
	Student();

	Student(int id, string name, int rank_a, int rank_b, int rank_c ,string degree, float degree_marks,
			 int preference, string course_name, string center_id, float payment, int reported, string prn);
	virtual ~Student();
	const string& getCenterId() const;
	void setCenterId(const string& centerId);
	const string& getCourseName() const;
	void setCourseName(const string& courseName);
	const string& getDegree() const;
	void setDegree(const string& degree);
	float getDegreeMarks() const;
	void setDegreeMarks(float degreeMarks);
	int getId() const;
	void setId(int id);
	const string& getName() const;
	void setName(const string& name);
	float getPayment() const;
	void setPayment(float payment);
	int getPreference() const;
	void setPreference(int preference);
	const string& getPrn() const;
	void setPrn(const string& prn);
	int getRankA() const;
	void setRankA(int rankA);
	int getRankB() const;
	void setRankB(int rankB);
	int getRankC() const;
	void setRankC(int rankC);
	int getReported() const;
	void setReported(int reported);
};

#endif /* STUDENT_H_ */
