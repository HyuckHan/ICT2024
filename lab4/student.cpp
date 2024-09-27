#include "student.h"

Student::Student(string _name, int _id, float _gpa) {
	name = _name;
	id = _id;
	gpa = _gpa;
}

int Student::getID() {
	return id;
}

void Student::setGPA(float _gpa) {
	gpa = _gpa;
}
