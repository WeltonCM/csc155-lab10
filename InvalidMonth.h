/*
Name: InvalidMonth
Author: Christopher Welton
Description: This class defines the InvalidMonth exception.  
*/

#ifndef INVALIDMONTH_H
#define INVALIDMONTH_H
#include <string>
#include <iostream>
using namespace std;

class InvalidMonth {
    public: 
        InvalidMonth(string num);
        InvalidMonth();
        string what() const;

    private:
        string message;
};
#endif