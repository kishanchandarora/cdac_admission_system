/*
 * Student.cpp
 *
 *  Created on: 15-Apr-2020
 *      Author: sunbeam
 */

#include "Student.h"

Student::Student() {
	this->id = 0;
	this->name = "";
	this->rank_a = -1;
	this->rank_b = -1;
	this->rank_c = -1;
	this->degree = "";
	this->degree_marks = 0.0;
	this->course_name = "";
	this->center_id = "";
	this->payment = 0;
	this->reported = 0;
	this->prn = "";
	this->preference = -1;

}

Student :: Student(int id, string name, int rank_a, int rank_b, int rank_c ,string degree, float degree_marks,
		 int preference, string course_name, string center_id, float payment, int reported, string prn) {
	this->id = id;
	this->name = name;
	this->rank_a = rank_a;
	this->rank_b = rank_b;
	this->rank_c = rank_c;
	this->degree = degree;
	this->degree_marks = degree_marks;
	this->course_name = course_name;
	this->center_id = center_id;
	this->payment = payment;
	this->reported = reported;
	this->prn = prn;
	this->preference = preference;

}

const string& Student::getCenterId() const {
	return center_id;
}

void Student::setCenterId(const string& centerId) {
	center_id = centerId;
}

const string& Student::getCourseName() const {
	return course_name;
}

void Student::setCourseName(const string& courseName) {
	course_name = courseName;
}

const string& Student::getDegree() const {
	return degree;
}

void Student::setDegree(const string& degree) {
	this->degree = degree;
}

float Student::getDegreeMarks() const {
	return degree_marks;
}

void Student::setDegreeMarks(float degreeMarks) {
	degree_marks = degreeMarks;
}

int Student::getId() const {
	return id;
}

void Student::setId(int id) {
	this->id = id;
}

const string& Student::getName() const {
	return name;
}

void Student::setName(const string& name) {
	this->name = name;
}

float Student::getPayment() const {
	return payment;
}

void Student::setPayment(float payment) {
	this->payment = payment;
}

int Student::getPreference() const {
	return preference;
}

void Student::setPreference(int preference) {
	this->preference = preference;
}

const string& Student::getPrn() const {
	return prn;
}

void Student::setPrn(const string& prn) {
	this->prn = prn;
}

int Student::getRankA() const {
	return rank_a;
}

void Student::setRankA(int rankA) {
	rank_a = rankA;
}

int Student::getRankB() const {
	return rank_b;
}

void Student::setRankB(int rankB) {
	rank_b = rankB;
}

int Student::getRankC() const {
	return rank_c;
}

void Student::setRankC(int rankC) {
	rank_c = rankC;
}

int Student::getReported() const {
	return reported;
}

void Student::setReported(int reported) {
	this->reported = reported;
}

Student::~Student() {
	// TODO Auto-generated destructor stub
}

