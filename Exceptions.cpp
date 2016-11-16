#include "Exceptions.h"


//Menu Exceptions
MenuException :: MenuException(int o)
{
	this->option = o;
}


void MenuException ::Msg()
{
	cout << "\tInvalid menu option! Please insert a valid one! \n";

}

//Date Exceptions
