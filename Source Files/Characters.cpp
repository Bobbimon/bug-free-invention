/*
 * Characters.cpp
 *
 *  Created on: 15 apr. 2016
 *      Author: jogr
 */

#include "../Header Files/AttackData.h"
#include "../Header Files/Characters.h"

#include <iostream>
#include <string>
#include <sstream>
#include <sstream>
#include <fstream>

using namespace std;

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

		while (myfile >> attack >> startup >> active >> advantage_on_hit >> advantage_on_block) {
			cout << attack << "\t" << startup << "\t" << active << "\t" << advantage_on_hit << "\t" << advantage_on_block << endl;
		}
		myfile.close();
	}

	while (answer !='y' && answer !='n'){
		cout << "\ndo you want to sort? y/n" <<endl;
		cin >> answer;
	switch(answer)	{
	case 'y':
		//förbannade skit funkar inte om jag råkar trycka på en bokstav istället för siffra!
		while(sortby >3){
		cout << "\nHow do you want to sort? 1. Safe on block 2. Unsafe on block 3. Low startup." <<endl;
		cin >> sortby;
		switch(sortby){
		case 1:
			cout<<"du kan va safe on block!";
			break;
		case 2:
			cout<<"nope, not doing it";
			break;
		case 3:
			cout<<"..still not doing it";
			break;
		default: cout<<"invalid choice, try a smaller number idiot";

		}
		}
	break;

	case 'n':
		while(answer2 != 'y' && answer2 != 'n'){
		cout << "\nSelect new character? y/n" <<endl;
		cin >> answer2;
		switch(answer2){
		case 'y':
			cout << "yeeeeeesss!!!" << endl;
			break;
		case 'n':
			cout << "noooooooooooo!!!" << endl;
			break;
		default: cout<<"invalid choice";
		}
		}
		break;

		default: cout<<"invalid choice";


	}
	}
}
