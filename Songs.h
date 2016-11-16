/*
 * Songs.h
 *
 *  Created on: 15/11/2016
 *      Author: brunoribeiro1998
 */

#ifndef SONGS_H_
#define SONGS_H_

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Song
{
	unsigned int id;
	string name;
	string artist;

public:
	Song(unsigned int i, string n,string a);
	~Song(){};
	unsigned int getId() const;
	string getName() const;
	string getArtist() const;
	bool operator == (const Song &m1) const;
};

#endif /* SONGS_H_ */
