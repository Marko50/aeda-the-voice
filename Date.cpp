/*
 * Date.cpp
 *
 *  Created on: 31/10/2016
 *      Author: user
 */
#include "Date.h"


int Date::getDay() const{
	return day;
}

int Date::getMonth() const{
	return month;
}
int Date::getYear() const{
	return year;
}

string Date::getDate() const{
	stringstream res;
	res << day;
	res << "/";
	res << month;
	res << "/";
	res << year;
	return res.str();
}

Date::Date(int day, int month, int year) {
	this->day = day;
	this->month = month;
	this->year = year;
}


