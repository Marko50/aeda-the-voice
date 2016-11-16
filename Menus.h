/*
 * Exceptions.h
 *
 *  Created on: 09/11/2016
 *      Author: user
 */

#ifndef MENUS_H_
#define MENUS_H_

using namespace std;
#include <algorithm>
#include <string>
#include <fstream>
#include "Competition.h"
#include "Date.h"
#include "Person.h"
#include "Exceptions.h"

#define HOST0   0
#define HOST1   1



class Menu
{
public:
	class InvalidMenuOption
	{
	public:
		void ErrorMsg(){
			cout << "Invalid menu option! Please choose a valid one!\n";
		}
	};
	string FirstPrint();
	void SecondPrint(Competition &c1);
	void ThirdPrint(Competition &c1);
	void FourthPrint(Competition &c1);

};




#endif /* MENUS_H_ */
