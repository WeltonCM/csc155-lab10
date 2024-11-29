/*
Name: InvalidDay
Author: Christopher Welton
Description: This class implements the InvalidDay exception class.  
*/

#include "InvalidDay.h"

InvalidDay::InvalidDay() : message("Invalid Day input!") {}
InvalidDay::InvalidDay(string num) : message(num + " is and invalid Day.") {}

string InvalidDay::what() const {
    return message.c_str();
}
