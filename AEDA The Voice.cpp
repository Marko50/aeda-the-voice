//============================================================================
// Name        : AEDA.cpp
// Author      : Fernando
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Competition.h"
#include "Date.h"
#include "Phase.h"
#include "Person.h"
#include "Session.h"
#include <iostream>
#include "Menus.h"
#include "Functions.h"
#include "Songs.h"

using namespace std;

int main() {
	srand(time(NULL));
	Menu m1;
	Competition c1;
	m1.FirstPrint();
	m1.SecondPrint(c1);
	m1.ThirdPrint(c1);
	cout << endl;
	/*
	cout << c1.getMentors().at(0)->getParticipants().size() << endl;
	cout << c1.getMentors().at(1)->getParticipants().size() << endl;
	cout << c1.getMentors().at(2)->getParticipants().size() << endl;
	cout << c1.getMentors().at(3)->getParticipants().size() << endl;
	*/

	return 0;
}
