#include <iostream>
#include <string>
#include "student.h"

using namespace std;

int main() {
	int id;
	string name;
	float gpa;

	cout << "Name : ";
	cin >> name;
	cout << "ID : ";
	cin >> id;
	cout << "GPA : ";
	cin >> gpa;

	Student student(name, id, gpa);

	cout << "ID : " << student.getID() << endl;
	cout << "CHANGE GPA : ";
	cin >> gpa;
	student.setGPA(gpa);
	return 0;
}
