#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <sstream>
#include "Person.h"
#include "Songs.h"
#include "Menus.h"

using namespace std;

bool comp(pair<Participant*, float> p1,pair<Participant*, float> p2);

Participant* LoadParticipants(string source);

bool testValidity(int day, int month, int year);

int RandomNumber(int x);

string removeExtraSpaces(string name);

Song* readSongsFiles(string line);

unsigned int readInt(int minValue, int  maxValue);

#endif
