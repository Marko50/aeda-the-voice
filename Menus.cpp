#include <iostream>
#include "Menus.h"
#include "Functions.h"


#include <iostream>

using namespace std;

string Menu ::FirstPrint()
{
	string opt;
	cout << "\tWelcome, welcome, welcome to THE VOICE'S support system! \n";
	cout << "What would you like to do?\n";
	cout << "1- Start a new edition of THE VOICE!\n";
	cout << "2- View information about other editions.\n";
	cout << "Option: ";
	while(true)
	{
		getline(cin, opt);
		try
		{
			if(opt != "1" && opt != "2")
			{
				throw InvalidMenuOption();
			}

			else
			{
				break;
			}
		}

		catch(InvalidMenuOption A)
		{
			A.ErrorMsg();
		}
	}

	return opt;
}

void Menu::SecondPrint(Competition &c1)
{

		int y;
		cout << "\tVery well! Let's do that!\n";
		cout << "Let's start by choosing the edition's year.";

		while (true) {
			cin >> y;
			try {
				if(cin.fail())
				{
					throw cinFail();
				}

				if (y <= 2000 || y >= 2100) {
					cin.ignore();
					cin.clear();
					throw(Date::InvalidYear2(y));

				} else {
					c1.setYear(y);
					break;
				}
			}

			catch(cinFail &A)
			{
				A.Msg();
			}

			catch (Date::InvalidYear2 &nome) {
				nome.MsgErrorYear();
			}
		}
		cin.ignore();
		cin.clear();
		c1.setYear(y);
		cout << "\tVery good! Now let's choose the host!";
		cout << "Of the following available options select 2 of them!\n";
		cout << "1 - Annoying twelve year old" << endl;
		cout << "2 - Ronnald Dump" << endl;
		cout << "3 - Hillarious Hilton" << endl;
		cout << "4 - Steve Harvey" << endl;
		cout << "5 - Another One" << endl;

		string HostOption1;
		string HostOption2;

		cout << "Option 1: ";

		while (true) {
			getline(cin, HostOption1);

			try {
				if (HostOption1 != "1" && HostOption1 != "2"
						&& HostOption1 != "3" && HostOption1 != "4"
						&& HostOption1 != "5" && HostOption1 != "6") {
					throw InvalidMenuOption();
				}

				else {
					break;
				}
			}

			catch (InvalidMenuOption &A) {
				A.ErrorMsg();
			}
		}
		cout << "Option 2: ";
		while (true) {
			getline(cin, HostOption2);

			try {
				if ((HostOption1 != "1" && HostOption1 != "2"
						&& HostOption1 != "3" && HostOption1 != "4"
						&& HostOption1 != "5" && HostOption1 != "6")
						|| HostOption1 == HostOption2) {
					throw InvalidMenuOption();
				}

				else {
					break;
				}
			}

			catch (InvalidMenuOption &A) {
				A.ErrorMsg();
			}
		}

		if (HostOption1 == "1") {
			vector<string> js;
			Host* doze =  new Host(js, 12, "Annoying twelve year old");
			c1.addHosts(doze);
		}

		else if (HostOption1 == "2") {
			vector<string> jks;
			Host* Ron = new Host(jks, 70, "Ronnald Dump");
			c1.addHosts(Ron);

		}

		else if (HostOption1 == "3") {
			vector<string> jkss;
			Host* Hil = new Host(jkss, 69, "Hillarious Hilton");
			c1.addHosts(Hil);
		}

		else if (HostOption1 == "4") {
			vector<string> jsk;
			Host* steve = new Host(jsk, 59, "Steve Harvey");
			c1.addHosts(steve);

		}

		else if (HostOption1 == "5") {
			vector<string> jkks;
			string name;
			int age;
			cout << "Please type his/her name:";
			getline(cin, name);
			cout << "Now please typer your hosts' age:";
			while (true) {
				cin >> age;
				//Person::invalidAge a1 = Person::invalidAge(age);
				try {
					if (age < 0 || age > 200) {
						throw Person::invalidAge(age);
					}

					else {
						break;
					}

				}

				catch (Person::invalidAge &a) {
					a.invalidAgeMsg();
				}
			}
			Host* other = new Host(jkks, age, "name");
			c1.addHosts(other);
		}

		if (HostOption2 == "1") {
			vector<string> js;
			Host* doze = new Host(js, 12, "Annoying twelve year old");
			c1.addHosts(doze);
		}

		else if (HostOption2 == "2") {
			vector<string> jks;
			Host* Ron =  new Host(jks, 70, "Ronnald Dump");
			c1.addHosts(Ron);

		}

		else if (HostOption2 == "3") {
			vector<string> jkss;
			Host* Hil = new Host(jkss, 69, "Hillarious Hilton");
			c1.addHosts(Hil);

		}

		else if (HostOption2 == "4") {
			vector<string> jsk;
			Host* steve = new Host(jsk, 59, "Steve Harvey");
			c1.addHosts(steve);

		}

		else if (HostOption2 == "5") {
			vector<string> jkks;
			string name;
			int age;
			getline(cin, name);
			while (true) {
				cin >> age;
				Person::invalidAge a1 = Person::invalidAge(age);
				try {
					if (age < 0 || age > 200) {
						throw Person::invalidAge(age);
					}

					else {
						break;
					}

				}

				catch (Person::invalidAge) {
					a1.invalidAgeMsg();
				}
			}
			Host* other = new Host(jkks, age, "name");
			c1.addHosts(other);
		}

		string charName;
		cout
				<< "Very good! You shall follow the course of a specific character of your choice."
				<< endl;
		cout << "Pick his/her  name:";
		getline(cin, charName);
		int charAge;
		cout << "Pick the age";
		while (true) {
			cin >> charAge;

			try
			{
				if(charAge <= 0 || charAge > 200)
				{
					throw Person::invalidAge(charAge);
				}
				else
				{
					break;
				}

			}

			catch(Person::invalidAge A)
			{
				A.invalidAgeMsg();
			}

		}
		cin.ignore();
		string city;
		cout << "Now, insert the name of the characters' hometown:";
		getline(cin, city);

		cout
				<< "Great! You are just a rookie, but a very promissing one. You will evolve your stats as long as you are not eliminated throughout the competition."
				<< endl;

		Participant* personal = new Participant(charAge, charName,city, 65, 75, 70);
		c1.addParticipants(personal);

	string linha;
	ifstream sources;
	sources.open("Participants.txt");
	if (sources.fail()) {
		cerr << "Error opening file" << endl;
		exit(1);
	}
	while (getline(sources, linha)) {
		c1.addParticipants(LoadParticipants(linha));
	}
	cout << "Some other candidates were also added!" << endl;

	sources.close();
	ifstream infile;
	infile.open("Songs.txt");
	string line;

	if (infile.fail()) {
		cerr << "Error opening file" << endl;
		exit(1);
	}
	while (getline(infile,line)){

			c1.addSongs(readSongsFiles(line));
		}
		infile.close();

		cout << "The musicians are set!"<<endl;

		cout << endl;

		cout << "Configuring the mentors..." << endl;

		Mentor* david = new Mentor(30,"David Carreira");
		Mentor* maria = new Mentor(30,"Maria Leal");
		Mentor* malhoa = new Mentor(30,"Ana Malhoa");
		Mentor* anselmo = new Mentor(30,"Anselmo Ralph");
		c1.addMentors(david);
		c1.addMentors(maria);
		c1.addMentors(anselmo);
		c1.addMentors(malhoa);
		cout << "Scheduling the sessions..." << endl;

		Session* SessaoCega = new Session(Date(10,1,2017), "Lisboa");
		Phase* FaseCega = new Phase(Date(10,1,2017), Date(10,1,2017), "Blind Proof");
		Session* Gala1 = new Session(Date(20,2,2017), "Lisboa");
		Session* Gala2 = new Session(Date(1,30,2017), "Lisboa");
		FaseCega->addSession(SessaoCega);
		c1.addPhases(FaseCega);
		Session* SessaoBatalha = new Session(Date(1,2,2017), "Lisboa");
		Phase* FaseBatalha = new Phase(Date(1,2,2017),Date(1,2,2017), "Battle Phase");
		FaseBatalha->addSession(SessaoBatalha);
		c1.addPhases(FaseBatalha);
		Phase* FaseFinal = new Phase(Date(20,2,2017), Date(1,30,2017), "Final Phase");
		FaseFinal->addSession(Gala1);
		FaseFinal->addSession(Gala2);
		c1.addPhases(FaseFinal);
		cout << "\tDone!" << endl;

		//cout << c1.getParticipants().at(0)->getName() << endl;
		//cout << c1.getParticipants().at(1)->getName() << endl;
	}

void Menu::ThirdPrint(Competition &c1)
{
	bool eliminado = false;
	cout << c1.getHosts().at(HOST0)->getName() << ": " << "Welcome to " << c1.getYear() << " competition!"<<endl;

	cout << c1.getHosts().at(HOST1)->getName() << ": " << "Yes!Yes! Welcome! A new journey is about to start. Let's go!"<<endl;

	cout << c1.getHosts().at(HOST0)->getName() << ": " << "A new bunch of contestants will all fight for a place in the Final and the ultimate win! To be exact: "<<c1.getParticipants().size()<<endl;

	cout << c1.getHosts().at(HOST1)->getName() <<": " << "Yes, but for now they will all try to impress our mentors! Here they come!"<<endl;

	cout << c1.getMentors().at(HOST0)->getName() << "," << c1.getMentors().at(1)->getName() << "," << c1.getMentors().at(2)->getName() << "," << c1.getMentors().at(3)->getName() << "enter the studio" << endl;

	cout << c1.getHosts().at(HOST0)->getName() << ": Let's start!"<<endl;

	unsigned int counter = 0;
	float performance;
	vector<pair<Participant*, float>> Rejected;
	/*
	 bool acDavid = false;
	 bool acMaria = false;
	 bool acAnselmo = false;
	 bool acMalhoa = false;
	 vector <string> aceites;
	 */
	vector<Mentor*> aceites;
	int MinDavid = 60 + RandomNumber(16);
	int MinMaria = 60 + RandomNumber(16);
	int MinAnselmo = 60 + RandomNumber(16);
	int MinMalhoa = 60 + RandomNumber(16);

	while (counter < c1.getParticipants().size()) {
		cout << "The " << counter + 1 << " contestant enters the studio"
				<< endl;
		cout << c1.getParticipants().at(counter)->getName() << ": "
				<< "Hi! My name is "
				<< c1.getParticipants().at(counter)->getName() << endl;
		cout << c1.getMentors().at(RandomNumber(4))->getName()
				<< ": Ok. Nobody asked you. Begin." << endl;
		performance = 0.7 * c1.getParticipants().at(counter)->getVoice()
				+ 0.3 * RandomNumber(100);
		if (performance >= MinDavid
				&& c1.getMentors().at(0)->getParticipants().size() < 14) {
			aceites.push_back(c1.getMentors().at(0));
		}
		if (performance >= MinMaria
				&& c1.getMentors().at(1)->getParticipants().size() < 14) {
			aceites.push_back(c1.getMentors().at(1));
		}

		if (performance >= MinMalhoa
				&& c1.getMentors().at(2)->getParticipants().size() < 14) {
			aceites.push_back(c1.getMentors().at(2));
		}
		if (performance >= MinAnselmo
				&& c1.getMentors().at(3)->getParticipants().size() < 14) {
			aceites.push_back(c1.getMentors().at(3));
		}

		if (aceites.size() == 0) {
			Rejected.push_back(
					make_pair(c1.getParticipants().at(counter), performance));
		} else if (aceites.size() == 1) {
			aceites.at(0)->getParticipants().push_back(
					c1.getParticipants().at(counter));
		}

		else {
			for (unsigned int i = 0; i < aceites.size(); i++) {
				cout << aceites.at(i)->getName() << " has chosen you!" << endl;
			}
			int opcao = RandomNumber(aceites.size());
			aceites.at(opcao)->getParticipants().push_back(
					c1.getParticipants().at(counter));
			cout << c1.getParticipants().at(counter)->getName() << ": I choose "
					<< aceites.at(opcao)->getName() << endl;
		}
		aceites.clear();
		counter++;
	}

	for(unsigned int i = 0; i < Rejected.size(); i++)
	{

	}

	sort(Rejected.begin(), Rejected.end(), comp);
	while (c1.getMentors().at(0)->getParticipants().size() < 14) {
		c1.getMentors().at(0)->getParticipants().push_back(
				Rejected.at(0).first);
		Rejected.erase(Rejected.begin(), Rejected.begin() + 1);

	}

	while (c1.getMentors().at(1)->getParticipants().size() < 14) {
		c1.getMentors().at(1)->getParticipants().push_back(
				Rejected.at(0).first);
		Rejected.erase(Rejected.begin(), Rejected.begin() + 1);

	}
	while (c1.getMentors().at(2)->getParticipants().size() < 14) {
		c1.getMentors().at(2)->getParticipants().push_back(
				Rejected.at(0).first);
		Rejected.erase(Rejected.begin(), Rejected.begin() + 1);

	}

	while (c1.getMentors().at(3)->getParticipants().size() < 14) {
		c1.getMentors().at(3)->getParticipants().push_back(
				Rejected.at(0).first);
		Rejected.erase(Rejected.begin(), Rejected.begin() + 1);
	}



}

void Menu::FourthPrint(Competition &c1) {
	//combate 2 a 2


}

