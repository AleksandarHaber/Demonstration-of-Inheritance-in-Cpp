#ifndef STUDENT_H
#define STUDENT_H
// This is a header file for the class Student

using namespace std;
#include<string>

class Student
{
	public:
		
		// constructors
		// default constructor
		// sets name=No name, gpa=0.0
		Student(); 
		// overloaded constructor, sets name=nameStudent , gpa=0.0
		Student(string nameStudent, float gpaStudent);
		
		// accessor functions
		string getName() const;
		float getGpa() const;
		// printing data
		void printData() const;
		
		//mutator functions
		void setName(string nameStudent);
		void setGpa(float gpaStudent);
				
		
	private:
		
		string name;
		float gpa;
};

#endif
