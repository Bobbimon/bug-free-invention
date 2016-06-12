/*
 * Characters.cpp
 *
 *  Created on: 15 apr. 2016
 *      Author: jogr
 */

#include "../Header Files/AttackData.h"
#include "../Header Files/Characters.h"

#include <iostream>
#include <limits>
#include <string>
#include <sstream>
#include <sstream>
#include <fstream>

using namespace std;
void character();

void Characters::characters(int x) {

	ostringstream ostr;
	ostr << x;
	choice = ostr.str() + ".";

	ifstream myfile;
	myfile.open("Resource Files/characters.txt");

	while (myfile >> nr >> name) {
		if (choice.compare(nr) == 0) {
			cout << nr << " " << name << endl;
			break;
		}
	}

	myfile.close();

	if (name.compare("Jago") == 0) {
		myfile.open("Resource Files/jago.txt");

		std::string attack;
		std::string startup;
		std::string active;
		std::string advantage_on_hit;
		std::string advantage_on_block;

		while (myfile >> attack >> startup >> active >> advantage_on_hit
				>> advantage_on_block) {
			cout << attack << "\t" << startup << "\t" << active << "\t"
					<< advantage_on_hit << "\t" << advantage_on_block << endl;
		}
		myfile.close();
	}

	while (answer != 'y' || answer != 'n') {
		cout << "\nDo you want to sort? y/n" << endl;
		cin >> answer;
		switch (answer) {
		case 'y':
			while (sortby != 1 || sortby != 2 || sortby != 3) {
				cout << "How do you want to sort? 1. Safe on block 2. Unsafe on block 3. Low startup 4. Back" << endl;
				/*Nar en char inte gar att parsa till en int sa blir det problem
				 * Sa nu kollar vi om det ar en int som vi skickar in annars sa ignorerar vi den.
				 *
				 * Jag tror att det kanske gar efter https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
				 *
				 * nar cin laser in det tecken far tecken.. MEN jag ar inte saker vilket begransar oss till 0-9.
				 *
				 * Men jag bara flummar.. :P � � och � blev skumma symboler
				 */
				while (!(cin >> sortby)) {
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Invalid input.  Try again: ";
				}
				cout << "You entered: " << sortby << endl;

				switch (sortby) {
				case 1:
					cout << "Du kan va safe on block!" << endl << endl;
					break;
				case 2:
					cout << "Nope, not doing it" << endl << endl;
					break;
				case 3:
					cout << "..still not doing it" << endl << endl;
					break;
				case 4:
					cout << "printing stats.." << endl << endl;
					characters(x);
					break;
				default:
					cout << "invalid choice, try a smaller number idiot" << endl << endl;
				}
			}
			break;

		case 'n':
			while (answer2 != 'y' || answer2 != 'n') {
				cout << "\nSelect new character? y/n" << endl;
				cin >> answer2;
				switch (answer2) {
				case 'y':
					cout << "yeeeeeesss!!!" << endl;
					character();
					break;
				case 'n':
					cout << "noooooooooooo!!!" << endl;
					break;
				default:
					cout << "invalid choice" << endl;
				}
			}
			break;

		default:
			cout << "invalid choice";
		}
	}
}
