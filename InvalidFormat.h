/*
Name: InvalidFormat
Author: Christopher Welton
Description: This class defines the InvalidFormat exception.  
*/

#ifndef INVALIDFORMAT_H
#define INVALIDFORMAT_H
#include <string>
#include <iostream>
using namespace std;

class InvalidFormat {
    public: 
        InvalidFormat(string input);
        InvalidFormat();
        string what() const;

    private:
        string message;
};
#endif