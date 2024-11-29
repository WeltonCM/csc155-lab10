/*
Name: InvalidDay
Author: Christopher Welton
Description: This class defines the InvalidDay exception.  
*/

#ifndef INVALIDDAY_H
#define INVALIDDAY_H
#include <string>
#include <iostream>
using namespace std;

class InvalidDay {
    public: 
        InvalidDay(string num);
        InvalidDay();
        string what() const;

    private:
        string message;
};
#endif