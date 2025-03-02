//write include statements
#include <iostream>
#include "repetition.h"
//write using statements
using std::cin;
using std::cout;

void usefactorial() 
{
	int num;
	cout << "number: ";
	cin >> num;
	cout << "factorial " << factorial(num) << "\n";
}
void usegcd() 
{
	int num1, num2;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	cout << "gcd: " << gcd(num1,num2) << "\n";
}

int main() 
{
	int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1 - Factorial\n";
        cout << "2 - Greatest Common Divisor\n";
        cout << "3 - Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            usefactorial();
        } 

        else if (choice == 2) {
            usegcd();
        } 

        else if (choice == 3) {
            char confirm;
            cout << "Are you sure you want to exit? (y/n): ";
            cin >> confirm;
            if (confirm == 'y' || confirm == 'Y') {
                break;
            }
        } 

        else {
            cout << "Invalid choice. Please try again.\n";
        }
    } while (true);

	return 0;
}