/*
 * Session.h
 *
 *  Created on: 31/10/2016
 *      Author: user
 */

#ifndef SESSION_H_
#define SESSION_H_

#include <string>
#include "Date.h"

class Session
{
	Date data;
	string local;

public:
	Session(Date d, string l);
	Date getDate() const;
	string getLocal() const;
};




#endif /* SESSION_H_ */
