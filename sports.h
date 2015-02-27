
#include <iostream>
using namespace std;

class Sports
{
private:
    string sportsName;
    string sportsBest;

public:
    Sports(string playerName, string playerBest);
    void setSportsName(string playerName);
    void setSportsBest(string playerBest);
    string getSportsName();
    string getSportsBest();
    void displaySportsInfo();
};
