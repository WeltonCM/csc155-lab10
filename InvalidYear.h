/*
Name: InvalidYear
Author: Christopher Welton
Description: This class defines the InvalidYear exception.  
*/

#ifndef INVALIDYEAR_H
#define INVALIDYEAR_H
#include <string>
#include <iostream>
using namespace std;

class InvalidYear {
    public: 
        InvalidYear(string num);
        InvalidYear();
        string what() const;

    private:
        string message;
};
#endif