/*
 * Concurso.cpp
 *
 *  Created on: 31/10/2016
 *      Author: user
 */


#include "Contest.h"

Contest::Contest(unsigned int y)
{
	this->year = y;
}

vector<Participant*> Contest ::getParticipants()
{
	return this->participants;
}

vector <Mentor*> Contest :: getMentors()
{
	return this->mentors;
}

vector <Phase*> Contest ::getPhases()
{
	return this->phases;
}

unsigned int Contest ::getYear()
{
	return this->year;
}
