// Our first program in C++
#include <iostream>
#include <string>
#include <fstream>
#include "../Header Files/AttackData.h"
#include "../Header Files/Characters.h"

using namespace std;
void character();

int main() {
	character();

	return 0;
}

void display(string x) {

	Characters ch;

	AttackData oh;
	oh.setHit(20);

	cout << "Character " << "      " << " attack " << "      " << " on hit  "
			<< "on block" << endl;
	cout << "" << "------" << "" << "------" << "   " << oh.getHit() << " "
			<< "     -2" << endl;
}

void character() {

	int character;
	Characters choice;
	string name;
	string nr;

	ifstream myfile;
	myfile.open("Resource Files/characters.txt");

	while (myfile >> nr >> name) {
		cout << nr << " " << name << endl;
	}

	cin >> character;
	choice.characters(character);
}
