#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "DataPoint.h"

using namespace std;

class DataSet {

    friend class NearestNeighbourClassifier;

protected:

    std::vector<DataPoint*> vectorOfDataPoints;

public:

     DataSet();

    void addPoint(DataPoint*);
    void removePoint(DataPoint*);
    void displayDataSet();


};



