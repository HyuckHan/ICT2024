#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <string>

using namespace std;

class Student {
private:
	string name;
	int id;
	float gpa;

public:
	Student(string _name, int _id, float _gpa);
	~Student() {}
	int getID();
	void setGPA(float _gpa);
};

#endif
