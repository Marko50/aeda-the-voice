/*
 * Songs.cpp
 *
 *  Created on: 15/11/2016
 *      Author: brunoribeiro1998
 */

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <fstream>
#include "Functions.h"
#include "Songs.h"

using namespace std;

Song::Song (unsigned int i, string n,string a){

	id=i;
	name=n;
	artist=a;
}

unsigned int Song::getId() const
{
	return id;
}

string Song::getName() const
{
	return name;
}

string Song::getArtist() const
{
	return artist;
}

bool Song::operator == (const Song &s1) const
{
	return name==s1.name;
}

