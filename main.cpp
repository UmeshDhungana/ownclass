#include <iostream>
#include "Sports.h"

using namespace std;

int main()
{
    string sportsName;
    string sportsBest;

    cout<< "Enter the name of your best sports";
    getline(cin, sportsName);

    cout<< "Enter the name of your best player";
    getline(cin, sportsBest);

    Sports sport1(sportsName,sportsBest);
    sport1.displaySportsInfo();
}
