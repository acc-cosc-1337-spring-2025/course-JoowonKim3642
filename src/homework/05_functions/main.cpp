#include <iostream>
#include <string>
#include "func.h"

using std::cout;
using std::cin;


int main() 
{
	int choice;
    std::string dna;

    do {
        cout << "Menu \n";
		cout << "1-Get GC Content \n";
		cout << "2- Get DNA Complement \n";
		cout << "3-Exit \n";
		cout << "Enter choice: ";
		cin >> choice;
		
		if (choice == 1) {
            cout << "Enter DNA string: ";
            cin >> dna;
            cout << "GC Content: " << get_gc_content(dna) << "\n";
        } 
        else if (choice == 2) {
            cout << "Enter DNA string: ";
            cin >> dna;
            cout << "DNA Complement: " << get_dna_complement(dna) << "\n";
        }

    } while (choice != 3);

	return 0;
}
