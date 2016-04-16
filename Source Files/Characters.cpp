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
	myfile.open("characters.txt");

	while (myfile >> nr >> name) {
		if (choice.compare(nr) == 0) {
			cout << nr << " " << name << endl;
		}
	}

	myfile.close();

}
