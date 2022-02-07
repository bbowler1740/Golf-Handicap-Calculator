#pragma once

#include <string>
#include <iostream>

using namespace std;

class DataPoint{

protected:

    short shotDistance;
    std::string club;    

public:

    DataPoint();

    short getShotDistance();
    std::string getClub();

    void setShotDistance(short);
    void setClub(std::string);

    void displayPoint();

};



