// Our first program in C++
#include "AttackData.h"
#include <iostream>

using namespace std;

void attack();

int main ()
{
	attack();
    return 0;
}
void attack(){
	AttackData oh;
	oh.setHit(20);


	cout << "Character " << "      " << " attack "<<"      "<<" on hit  "<<"on block"<< endl;
	cout << "Sabrewulf " << "------" << " attack "<<"------"<<"   "<<oh.getHit()<<" "<<"     -2"<< endl;
	cout << "Jago      " << "------" << " attack "<<"------"<<"   3  "<<"     -2"<< endl;
	cout << "Orchid    " << "------" << " attack "<<"------"<<"   3  "<<"     -2"<< endl;
	cout << "Fulgore   " << "------" << " attack "<<"------"<<"   3  "<<"     -2"<< endl;

}
