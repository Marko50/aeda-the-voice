/*
 * Date.h
 *
 *  Created on: 31/10/2016
 *      Author: user
 */

#ifndef DATE_H_
#define DATE_H_

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Date {
private:
	int day;
	int month;
	int year;
public:
	Date() {
	}
	Date(int day, int month, int year);
	class InvalidYear2 {
		int y;
	public:
		InvalidYear2(int year) {
			y = year;
		}
		void MsgErrorYear() {
			if (this->y < 2000)
				cout << "I don't think The Voice was a thing back then. Try again: "
						<< endl;
			else if (this->y > 2100)
				cout << "The world will probably be over before that.Try again: " << endl;
		}
	};
	class InvalidDay {
		int dayInv;
	public:
		InvalidDay(int d)
	{
			this->dayInv = d;
	}
		void MsgD(){
			cout << "Invalid day! Please insert a valid one! \n";
		}
	};
	class InvalidMonth{
			int MonthInv;
		public:
			InvalidMonth(int m)
		{
				this->MonthInv = m;
		}
			void MsgM(){
				cout << "Invalid month! Please insert a valid one! \n";
			}
		};
	class InvalidYear{
			int yearInv;
		public:
			InvalidYear(int y)
		{
				this->yearInv = y;
		}
			void MsgD(){
				cout << "Invalid year! Please insert a valid one! \n";
			}
		};
	int getDay() const;
	int getMonth() const;
	int getYear() const;
	string getDate() const;
};



#endif /* DATE_H_ */
