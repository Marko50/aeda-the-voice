/*
 * Pessoa.h
 *
 *  Created on: 31/10/2016
 *      Author: user
 */

#ifndef PERSON_H_
#define PERSON_H_

#include "Phase.h"
#include <string>
#include <vector>



using namespace std;

class Person
{
	unsigned int age;
	string name;
public:
	Person(unsigned int a, string n);
	~Person()
	{

	}
	class invalidAge
	{
		int age;
	public:
		invalidAge(int a) {
			age = a;
		}
		void invalidAgeMsg() {
		if(age < 0)
		{
			cout << "Jebus Christ, nobody is that young!Try again:";
		}

		else if(age > 200)
		{
			cout << "Don't you think that's too old? Try again:";
		}
	}

	};
	string getName() const;
	unsigned int getAge() const;
	bool operator ==(Person p1);
};

class Phase;


class Participant : public Person
{
	Phase* Elim;
	string city;
	bool Eliminado;
	unsigned int popularity;
	unsigned int Style;
	unsigned int voice;
public:
	Participant(unsigned int a, string n,string c, unsigned int p, unsigned int s, unsigned int v);
	~Participant()
	{

	}
	void SetEtapaElim(Phase* ep);
	unsigned int getPopularity() const;
	unsigned int getStyle() const;
	unsigned int getVoice() const;
	string getCity() const;
	bool getElim() const;
};

class Mentor : public Person
{
	vector <Participant*> team;
public:
	Mentor(unsigned int a, string n);
	~Mentor()
	{

	}
	vector <Participant*> &getParticipants();
	void addParticipant(Participant* p);
};

class Host : public Person
{
	vector <string> jokes; // o MM nao concorda com isto --'
public:
	Host(vector <string> p, int a, string n);
	vector <string> getJokes();

};

#endif /* PERSON_H_ */
