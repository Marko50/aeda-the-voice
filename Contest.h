/*
* Concurso.h
 *
 *  Created on: 31/10/2016
 *      Author: user
 */

#ifndef CONTEST_H_
#define CONTEST_H_

#include "Session.h"
#include "Phase.h"
#include <vector>
#include "Person.h"

using namespace std;

class Contest
{
	unsigned int year;
	vector <Participant*> participants;
	vector <Mentor*> mentors;
	vector <Phase*> phases;
public:
	Contest(unsigned int y);
	vector <Participant*> getParticipants();
	vector <Mentor*> getMentors();
	vector <Phase*> getPhases();
	unsigned int getYear();
};


#endif /* CONTEST_H_ */
