/***************************************************
Name: Stefania Ascencio
* Lab: INHERITANCE HW*/
#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	string studFirstName;
	string studLastName;
	double studExam1, studExam2, studExam3;
	double studAvg;
	char studGrade; //alphabetical grade
	double studScore;


public:
	Student() {
		cout << " Enter student's First Name: "<< endl;
		cin >> studFirstName;
		cout << "";
		cout << " Enter student's Last Name: " << endl;
		cin >> studLastName;
		cout << "";
		cout << " Enter score for exam 1: " << endl;
		cin >> studExam1;
		cout << "";
		cout << " Enter score for exam 2: "<< endl;
		cin >> studExam2;
		cout << "";
		cout << " Enter score for exam 3: "<< endl;
		cin >> studExam3;
		cout << "";
		
		studScore = (studExam1 + studExam2 + studExam3);
		studAvg = (studScore) / 3;
	}

	double getStudAvg() const {
		return studAvg;
	}

	char getGrade() {
		if (studAvg >= 90) {
			studGrade = 'A';
		}
		else if (studAvg >= 80) {
			studGrade = 'B';
		}
		else if (studAvg >= 70) {
			studGrade = 'C';
		}
		else if (studAvg >= 60) {
			studGrade = 'D';
		}
		else {
			studGrade = 'F';
		}
		return studGrade;
	}


	class gradStudent;


	
};

int main() {

	Student gradStudent(string, float, string);
	
	string bsDegreeName; //BS degree name
	float bsGPA; //BS GPA
	string ProgName; //Master's program name
	cout << " Enter Degree Name :"  << endl;
	cin >> bsDegreeName;
	cout << " Enter GPA: " << endl;
	cin >> bsGPA;
	cout << " Enter Master Program Name: " << endl;
	cin >> ProgName;
	
	Student student;
	
	cout << "Grade is " << student.getGrade() << endl;
	system("pause");
	return 0;
}
