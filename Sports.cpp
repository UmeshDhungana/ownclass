
#include <iostream>
#include "Sports.h"

using namespace std;

Sports::Sports(string playerName, string playerBest)
{
    setSportsName(playerName);
    setSportsBest(playerBest);
}

Sports::~Sports()
{
    cout<<"Object Destroyed";
}

void Sports:: setSportsName(string playerName)
{
    sportsName = playerName;
}

void Sports:: setSportsBest(string playerBest)
{
    sportsBest = playerBest;
}

string Sports:: getSportsName()
{
    return sportsName;
}

string Sports:: getSportsBest()
{
    return sportsBest;
}

void Sports:: displaySportsInfo()
{
    cout << "Best sport is "<< getSportsName();
    cout << " Best player is "<< getSportsBest()<<endl;
}
