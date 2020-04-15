//============================================================================
// Name        : cdac-addmission-system.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include<fstream>
#include <iostream>
#include <sstream>
using namespace std;

#include<vector>


void read_record()
	{
         // File pointer
	    ifstream fin;

	    // Open an existing file
	    fin.open("reportcard.csv", ios::in);

	    // Get the roll number
	    // of which the data is required
	    int rollnum;
	    int roll2, count = 0;
	    cout << "Enter the roll number of the student to display details: ";
	    cin >> rollnum;

	    if(!fin.is_open()) {
	    	cout<<"Fail to open a file"<<endl;
	    }

	    // Read the Data from the file
	    // as String Vector
	    vector<string> row;
	    string line, word, temp;

	    while (fin.good()) {

	        row.clear();

	        // read an entire row and
	        // store it in a string variable 'line'
	        getline(fin, line);
	        // used for breaking words
	        std :: stringstream s(line);

	        // read every column data of a row and
	        // store it in a string variable, 'word'
	        while (getline(s, word, ','))
	        {

	            // add all the column data
	            // of a row to a vector
	            row.push_back(word);
	        }
	        // convert string to integer for comparision
                 roll2 = stoi(row[0]);
	        // Compare the roll number

                      if (roll2 == rollnum)
                     {
	            // Print the found data
	            count = 1;
	            cout << "Details of Roll " << row[0] << " : \n";
	            cout << "Name: " << row[1] << "\n";
	            cout << "Maths: " << row[2] << "\n";
	            cout << "Physics: " << row[3] << "\n";
	            cout << "Chemistry: " << row[4] << "\n";
	            cout << "Biology: " << row[5] << "\n";
	            break;
	        }
	    }
	    if (count == 0)
	        cout << "Record not found\n";
	}



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
	cout<<"5. Give peferences"<<endl;
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

int main2() {
	int choice, sub_choice;

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



int main(void) {
	read_record();
	return 0;
}
