/*
 * Etapa.cpp
 *
 *  Created on: 31/10/2016
 *      Author: user
 */

#include "Phase.h"

Phase :: Phase(Date startDate, Date endDate, string ID)
{
	this->ID = ID;
	this->startDate = startDate;
	this->endDate = endDate;
}

void Phase ::addContestants(Participant* p)
{
	this->contestants.push_back(p);
}

void Phase ::addSession(Session* s)
{
	this->sessions.push_back(s);
}

Date Phase::getStartDate() const{
	return startDate;
}


Date Phase::getEndDate() const{
	return endDate;
}

string Phase::getID() const{
	return ID;
}

vector<Session*> Phase::getSessions() {
	return sessions;
}

vector<Participant*> Phase::getContestants() {
	return contestants;
}

