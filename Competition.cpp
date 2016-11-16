/*
 * Competition.cpp
 *
 *  Created on: 31/10/2016
 *      Author: user
 */
#include "Competition.h"

#include <string>
#include <iostream>
#include <vector>

using namespace std;


/*Competition::Competition(int y){
	this->year=y;}
*/
void Competition ::setInitial(vector<Participant*> p)
{
	for(unsigned int i = 0; i < p.size(); i++)
	{
		Initialparticipants.push_back(p.at(i));
	}
}

int Competition::getYear() const{
	return year;}

int Competition::numParticipants(){
	return participants.size();}

vector <Participant *> & Competition::getParticipants(){

	return participants;
}

vector <Mentor *>& Competition::getMentors(){

	return mentors;
}

vector <Host *>& Competition::getHosts(){

	return hosters;
}

vector <Phase *>& Competition::getPhases(){

	return phases;
}

vector <Song *> &Competition::getSongs(){

	return songs;
}

void Competition ::setYear(int y)
{
	this->year = y;
}

void Competition::addParticipants(Participant *p){

	participants.push_back(p);
}

void Competition::addMentors(Mentor* m){

	mentors.push_back(m);
}

void Competition::addPhases(Phase *ph){

	phases.push_back(ph);
}

void Competition::addHosts(Host *h){

	hosters.push_back(h);
}
void Competition::addSongs(Song *s){

	songs.push_back(s);
}
