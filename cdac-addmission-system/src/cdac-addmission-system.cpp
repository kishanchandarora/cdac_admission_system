//============================================================================
// Name        : cdac-addmission-system.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "AdmissionSystem.h"
#include<fstream>
#include <iostream>
#include <sstream>
using namespace std;

#include<vector>

int menu_list(void) {
	int choice;
	cout<<"0. for exit"<<endl;;
	cout<<"1. Student"<<endl;
	cout<<"2. Admin"<<endl;
	cout<<"3. Center coordinator"<<endl;
	cout<<"Enter your choice : ";
	cin>>choice;
	return choice;
}


int student_list(void) {
	int choice;
	cout<<"0. for exit"<<endl;;
	cout<<"1. Register new student"<<endl;
	cout<<"2. Sign in"<<endl;
	cout<<"3. List courses"<<endl;
	cout<<"4. List centers"<<endl;
	cout<<"5. Give preferences"<<endl;
	cout<<"6. See allocated center/course"<<endl;
	cout<<"7. Update payment details"<<endl;
	cout<<"Enter your choice : ";
	cin>>choice;
	return choice;
}



int admin_list() {
	int choice;
	cout<<"0. for exit"<<endl;;
	cout<<"1. Sign in"<<endl;
	cout<<"2. List courses & eligibilities"<<endl;
	cout<<"3. List centers & capacities"<<endl;
	cout<<"4. List students"<<endl;
	cout<<"5. Update student ranks"<<endl;
	cout<<"6. Allocate centers (Round 1)"<<endl;
	cout<<"7. Allocate centers (Round 1)"<<endl;
	cout<<"8. List allocated students"<<endl;
	cout<<"9. List paid students"<<endl;
	cout<<"10. List reported(at center) students"<<endl;
	cout<<"11. Generate PRN"<<endl;
	cout<<"12. List admitted students (with PRN) for given center"<<endl;
	cout<<"Enter your choice : ";
	cin>>choice;
	return choice;
}

int center_coordinator_list() {
	int choice;
	cout<<"0. for exit"<<endl;;
	cout<<"1. Sign in"<<endl;
	cout<<"2. List courses(of that center)"<<endl;
	cout<<"3. List students(allocated to that center)"<<endl;
	cout<<"4. Update reported status"<<endl;
	cout<<"5. List admitted students (with PRN)"<<endl;
	cout<<"Enter your choice : ";
	cin>>choice;
	return choice;
}

void load_students(vector<Student>& students) {
	ifstream fin("students.csv", ios :: in);
	if(!fin.is_open()) {
		cout<<"Failed to open a file!"<<endl;
		return;
	}

	string token[13], line;

	int c=0;
	while(getline(fin, line)) {
		stringstream s(line);
		cout<<line<<endl;
		for(int i=0; i<13; i++)
			getline(s, token[i], ',');
		Student stu(stoi(token[0]), token[1], stoi(token[2]), stoi(token[3]), stoi(token[4]),
				 token[5], stof(token[6]), stoi(token[7]), token[8], token[9], stof(token[10]),
				 stoi(token[11]), token[12]);
		students.push_back(stu);
		c++;
	}
	cout<<"Courses Loaded : "<<c<<endl;
	fin.close();
}


void save_students(vector<Student>& students) {
	ofstream fout("students.csv", ios :: out);

	if(!fout.is_open()) {
		cout<<"Failed to opened file"<<endl;
		return;
	}


	for(int i=0; i<students.size(); i++) {
		fout << students[i].getId() << "," << students[i].getName()<< ","
				<< students[i].getRankA()<< "," << students[i].getRankB()<< ","
				<< students[i].getRankC() <<","<< students[i].getDegree() << "," << students[i].getDegreeMarks()<< ","
				<< students[i].getPreference()<< "," << students[i].getCourseName()<< ","
				<< students[i].getCenterId() << ","<<students[i].getPayment() << "," << students[i].getReported()<< ","
				<< students[i].getPrn()<< endl;
	}

	cout << "Students saved." << endl;

	fout.close();


}

int main() {
	int choice, sub_choice;
	vector<Student> students;
	while(1) {

		switch(choice = menu_list()) {
		case 0:
			exit(0);
			break;
		case 1:
			// for student
			do {
				switch(sub_choice = student_list()) {
				case 0:
					break;
				case 1:
					load_students(students);
					save_students(students);

					break;
				case 2:
					break;
				case 3:
					break;
				case 4:
					//list_center("centers.csv");
					break;
				case 5:
					break;
				case 6:
					break;
				case 7:
					break;
				default:
					cout<<"Invalid Choice!"<<endl<<endl;
				}
			} while(sub_choice != 0);
			break;


		case 2:
			// for Admin
			do {
				switch(sub_choice = admin_list()) {
				case 0:
					break;
				case 1:
					break;
				case 2:
					break;
				case 3:
					break;
				case 4:
					break;
				case 5:
					break;
				case 6:
					break;
				case 7:
					break;
				case 8:
					break;
				case 9:
					break;
				case 10:
					break;
				case 11:
					break;
				case 12:
					break;

				default:
					cout<<"Invalid Choice!"<<endl<<endl;
				}
			} while(sub_choice!=0);

			break;

		case 3:
			// for center coordinator
			do {
				switch(sub_choice = center_coordinator_list()) {
				case 0:
					break;
				case 1:
					break;
				case 2:
					break;
				case 3:
					break;
				case 4:
					break;
				case 5:
					break;
				default:
					cout<<"Invalid Choice!"<<endl<<endl;
				}
			} while(sub_choice!=0);
			break;

		default:
			cout<<"Invalid Choice!"<<endl<<endl;
		}
	}
	return 0;
}




int main1() {
	string line;
	fstream my_file;
	my_file.open("example.txt", ios :: out);
	my_file<<"This is line 1 \n";
	my_file<<"This is line 2 \n";
	my_file.close();


	my_file.open("example.txt", ios :: in);

	if(my_file.is_open()) {
		while(getline(my_file, line)) {
			cout<<line<<endl;
		}
		my_file.close();
	}
	else {
		cout<<"Unable to open a file \n";
	}


	return 0;
}



//
//int main(void) {
//	read_record("reportcard.csv");
//	return 0;
//}
