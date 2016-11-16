/*
 * Etapa.h
 *
 *  Created on: 31/10/2016
 *      Author: user
 */

#ifndef PHASE_H_
#define PHASE_H_

#include "Session.h"
#include "Date.h"
#include "Person.h"
#include <string>
#include <vector>
using namespace std;

class Participant;

class Phase {
private:
	Date startDate;
	Date endDate;
	string ID;
	vector <Session*> sessions;
	vector <Participant*> contestants;
public:
	Phase()
	{

	}
	~Phase()
	{

	}
	Phase(Date startDate, Date endDate, string ID);
	void addSession (Session* s);
	void addContestants(Participant* p);
	Date getStartDate() const;
	Date getEndDate() const;
	string getID() const;
	vector <Session*> getSessions();
	vector <Participant*> getContestants();
};


#endif /* PHASE_H_ */
