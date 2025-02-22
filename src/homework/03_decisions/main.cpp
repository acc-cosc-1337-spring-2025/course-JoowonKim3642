//write include statements
#include <iostream>
#include <string>
#include "decisions.h"

using std::cin;
using std::cout;
using std::endl;

int main() 
{
	int choice, grade;
	string letter_grade;

	cout << "\tMain Menu\n\n1. Letter grade using if\n2. Letter grade using switch\n3. exit\n";
	cin >> choice;

	switch (choice) {
		case 3:
			exit(0);
		case 2:
			cout << "Enter grade value (0-100): ";
			cin >> grade;
			letter_grade = get_letter_grade_using_switch(grade);
			break;
		case 1:
			cout << "Enter grade value (0-100): ";
			cin >> grade;
			letter_grade = get_letter_grade_using_if(grade);
			break;
		default:
			cout << "Invalid selection";
			exit(0);
	}
	cout << "The letter grade for value " << grade << " is " << letter_grade << endl;
	return 0;
}