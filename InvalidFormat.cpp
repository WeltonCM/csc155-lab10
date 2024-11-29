/*
Name: InvalidFormat
Author: Christopher Welton
Description: This class implements the InvalidFormat exception class.  
*/

#include "InvalidFormat.h"

InvalidFormat::InvalidFormat() : message("Invalid Date format input! (Utilize MM-DD-YYYY)") {}
InvalidFormat::InvalidFormat(string input) : message(input + " is an invalid format. Please use MM-DD-YYYY.") {}

string InvalidFormat::what() const {
    return message.c_str();
}
