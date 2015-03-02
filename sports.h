#include <iostream>

#ifndef SPORTS_H
#define SPORTS_H
using namespace std;
class Sports
{
private:
    string sportsName;
    string sportsBest;

public:
    Sports(string playerName, string playerBest);
    ~Sports();
    void setSportsName(string playerName);
    void setSportsBest(string playerBest);
    string getSportsName();
    string getSportsBest();
    void displaySportsInfo();
};

#endif // SPORTS_H
