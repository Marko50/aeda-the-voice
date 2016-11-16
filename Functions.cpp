#include "Functions.h"

bool testValidity(int d, int m, int y) {
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
		if (d > 31 || d < 1) {
			return false;
		}
	}

	else if ((m == 2 && y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
		if (d > 29 || d < 1) {
			return false;
		}
	}

	else if (m == 2) {
		if (d > 28 || d < 1) {
			return false;
		}
	}

	else if (m == 4 || m == 6 || m == 9 || m == 11) {
		if (d > 30 || d < 1) {
			return false;
		}
	}
	return true;
}

int RandomNumber(int x) {
	int y;
	//srand(time(NULL));
	y = rand() % x; // * rand() % 100 //include commented part for better randomness
	return y;
}

Participant* LoadParticipants(string source)
{
	int v  = RandomNumber(100);
	int s  = RandomNumber(100);
	int p  = RandomNumber(100);
	istringstream ss(source);
	string name;
	int age;
	string age2;
	string city;
	getline(ss, name, ';');
	getline(ss, age2, ';');
	istringstream ss2(age2);
	ss2 >> age;
	ss >> city;
	Participant* pa =  new Participant(age, name, city, p, s, v);
	return pa;
}


string removeExtraSpaces(string name) {
	for (unsigned int i = 0; i < name.length(); i++) {
		if (!isalpha(name.at(i))) {
			if (i + 1 < name.length())
				if (!isalpha(name.at(i + 1))) {
					name.erase(name.begin() + i);
					i--;
				}
				else {
				}
			else if (i = name.length() - 1)
				name.erase(name.begin() + i);
		}
	}
	if (!isalpha(name.at(0)))
		name.erase(name.begin());

	return name;
}


Song* readSongsFiles(string line){

	istringstream ss(line);
	int id;
	string id2;
	string name;
	string artist;
	int year;

	getline(ss, id2, ')');
	getline(ss, name, '-');
	getline (ss, artist, '-');

	istringstream ss2(id2);
	ss2 >> id;
	ss >> year;
	Song* so = new Song(id,name,artist);
	return so;

}

bool comp(pair<Participant*, float> p1,pair<Participant*, float> p2)
{
	return p1.second < p2.second;
}

unsigned int readInt(int minValue, int  maxValue){
	bool gotInt = false;
	int number;
	string line;
	char *chk;

	while (!gotInt) {
		getline(cin, line);
		number = (int) strtol(line.c_str(), &chk, 10);
	try
	{
		if (*chk == '\0' || isspace (*chk))
		gotInt = true;

		else
			throw Menu::InvalidMenuOption();

		if(gotInt && (number < minValue || number > maxValue)) {
			gotInt = false;
			throw Menu::InvalidMenuOption();
		}

	}

	catch(Menu::InvalidMenuOption &A)
	{
		A.ErrorMsg();
	}


	}
	return number;
}
