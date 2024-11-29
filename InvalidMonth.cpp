/*
Name: InvalidMonth
Author: Christopher Welton
Description: This class implements the InvalidMonth exception class.  
*/

#include "InvalidMonth.h"
#include <string>

using namespace std;

InvalidMonth::InvalidMonth() : message("Invalid Month!") {}
InvalidMonth::InvalidMonth(string num) : message(num + " is an invalid month") {}

string InvalidMonth::what() const {
    return message;
}