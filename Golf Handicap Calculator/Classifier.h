#pragma once
#include <limits>
#include <cmath>
#include "DataSet.h"

using namespace std;

class Classifier {

protected: 

    DataSet trainedData;

public:

    virtual bool predictPoint(DataPoint*);
    virtual short distanceBetweenShots(DataPoint*, DataPoint*);

};



