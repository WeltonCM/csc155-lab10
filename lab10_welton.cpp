/*
Name: Lab10_Welton
Author: Christopher Welton
Description: This program showcases exception throwning 
*/

#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include "InvalidDay.h"
#include "InvalidMonth.h"
#include "InvalidYear.h"

using namespace std;


vector<string> split(const string& s, const string& delimiter){
    vector<string> tokens;
    string remaining = s;
    size_t pos=0;
    string token;
    while((pos = remaining.find(delimiter)) != string::npos) {
        token = remaining.substr(0, pos);
        tokens.push_back(token);
        remaining.erase(0, pos + delimiter.length());    
    }
    tokens.push_back(remaining);
    return tokens;
}

string convertDate(string dateOfBirth, vector<int>& years){
    chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
    time_t currentTime = chrono::system_clock::to_time_t(now);
    tm* localTime = localtime(&currentTime);
    int year = localTime->tm_year + 1900;

    const array<string, 12> months = {"January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"};

    vector<string> tokens = split(dateOfBirth, "-");
    if(stoi(tokens.at(0)) <  1 || stoi(tokens.at(0)) > 12) {
        throw InvalidMonth(tokens.at(0));
    }
    if(stoi(tokens.at(1)) < 1 || stoi(tokens.at(1)) > 31) {
        throw InvalidDay(tokens.at(1));
    }

    if(stoi(tokens.at(2)) < (year - 150) || stoi(tokens.at(2)) > year){
        throw InvalidYear(tokens.at(2));
    }
    years.push_back(stoi(tokens.at(2)));
    return months[stoi(tokens.at(0)) - 1] + ", " + tokens.at(1) + " " + tokens.at(2);
}

bool comp(int a, int b) {
    return a <= b;
}

int main() {
    vector<int> yearsList;

    while(yearsList.size() <= 10){
        string dateOfBirth;
        cout << "Please enter a date using numbers (mm-dd-yyyy):" << endl;
        cin >> dateOfBirth;
        try {
            string date = convertDate(dateOfBirth, yearsList);
            cout << dateOfBirth + " -> " + date << endl;
        } catch (InvalidMonth e){
            cout << e.what() + "\n";
        } catch (InvalidDay e){
            cout << e.what() + "\n";
        } catch (InvalidYear e){
            cout << e.what() + "\n";
        }
    }
    sort(yearsList.begin(), yearsList.end(), comp);
    cout << "The sorted List of years in ascending order is: " << endl;
    for(int i=0; i<yearsList.size(); i++){
        cout << yearsList.at(i) << ", ";
    }


    return 0;
}

