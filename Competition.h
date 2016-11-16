/*
* Competition.h
 *
 *  Created on: 31/10/2016
 *      Author: user
 */

#ifndef COMPETITION_H_
#define COMPETITION_H_

#include "Session.h"
#include "Phase.h"
#include "Person.h"
#include "Songs.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Competition {
	int year;
	vector <Participant*> participants;
	vector <Participant*> Initialparticipants;
	vector <Mentor*> mentors;
	vector <Phase*> phases;
	vector <Host*> hosters;
	vector <Song*> songs;

public:
	//Competition(){}
	//Competition(int y);
	int numParticipants(); //numero de participantes na edicao
	int getYear() const;
	vector <Participant *> &getParticipants();
	vector <Mentor *> &getMentors();
	vector <Phase *> &getPhases();
	vector <Host *> &getHosts();
	vector <Song *> &getSongs();
	void setYear(int y);
	void addMentors(Mentor *m) ;
	void addParticipants(Participant *p);
	void addPhases(Phase *ph);
	void addHosts(Host*h);
	void addSongs(Song *s);
	void setInitial(vector<Participant*> p);


};


#endif /* COMPETITION_H_ */
