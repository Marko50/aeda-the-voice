/*
 * Exceptions.h
 *
 *  Created on: 09/11/2016
 *      Author: user
 */

#ifndef EXCEPTIONS_H_
#define EXCEPTIONS_H_

#include <iostream>

using namespace std;

class cinFail
{
public:
	void Msg()
	{
		cout << "You failed to enter a correct option! Please try again: " << endl;
	}
};

class MenuException
{
	int option;
public:
	MenuException(int o);
	void Msg();

};


class DateException
{

};





#endif /* EXCEPTIONS_H_ */
