/*
Name: InvalidYear
Author: Christopher Welton
Description: This class implements the InvalidYear exception class.  
*/

#include "InvalidYear.h"

InvalidYear::InvalidYear() : message("Invalid Year!") {}
InvalidYear::InvalidYear(string year) : message(year + " is an invalid year!") {}

string InvalidYear::what() const {
    return message;
}