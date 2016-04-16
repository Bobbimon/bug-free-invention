// Our first program in C++
#include "AttackData.h"
#include <iostream>
#include <string>
#include "Characters.h"
#include <fstream>

using namespace std;

//void attack();
void character();

int main ()
{
	character();

	return 0;
}

void display(string x){

	Characters ch;

	AttackData oh;
	oh.setHit(20);


	cout << "Character " << "      " << " attack "<<"      "<<" on hit  "<<"on block"<< endl;
	cout << "" << "------" <<""<<"------"<<"   "<<oh.getHit()<<" "<<"     -2"<< endl;
}

void character(){

	Characters choice;
	int character;
	string name;
	string nr;

	ifstream myfile;
	myfile.open ("characters.txt");

	while (myfile >>nr>> name){
		cout<<nr<<" "<<name<<endl;
	}

	cin >> character;

	choice.characters(character);
}
