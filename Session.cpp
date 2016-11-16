/*
 * Session.cpp
 *
 *  Created on: 31/10/2016
 *      Author: up201505821
 */

#include "Session.h"


Session :: Session(Date d, string l)
{
	this->data = d;
	this->local = l;
}


Date Session :: getDate()const
{
	return this->data;
}

string Session :: getLocal() const
{
	return this->local;
}
