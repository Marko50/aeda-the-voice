/*
 * Pessoa.cpp
 *
 *  Created on: 31/10/2016
 *      Author: user
 */

#include "Person.h"

//Person
Person :: Person(unsigned int a, string n)
{
	this->age = a;
	this->name = n;
}


unsigned int Person :: getAge() const
{
	return age;
}

string Person :: getName() const
{
	return name;
}

bool Person :: operator == (Person p1)
{
	if(p1.getName() == name && p1.getAge() == age)
	{
		return true;
	}

	return false;
}
//Participant

Participant::Participant(unsigned int a, string n,string c,unsigned int p, unsigned int s, unsigned int v) : Person(a,n)
{
	this->city = c;
	this->Eliminado = false;
	Elim = new Phase();
	this->Style = s;
	this->popularity = p;
	this->voice = v;
}

string Participant ::getCity() const
{
	return this->city;
}

unsigned int Participant ::getPopularity() const
{
	return this->popularity;
}

unsigned int Participant::getVoice() const {
	return this->voice;
}

unsigned int Participant::getStyle() const {
	return this->Style;
}

bool Participant::getElim() const {
	return Eliminado;
}

void Participant::SetEtapaElim(Phase* ep) {
	this->Elim = ep;
}

//Mentor

Mentor::Mentor(unsigned int a, string n) :
		Person(a, n) {

}

vector<Participant*>& Mentor::getParticipants(){
	return this->team;
}

void Mentor::addParticipant(Participant* p) {
	this->team.push_back(p);
}

//Host
Host::Host(vector<string> j, int a, string n) :
		Person(a, n) {
	this->jokes = j;
}


vector <string> Host ::getJokes()
{
	return this->jokes;
}




