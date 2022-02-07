#pragma once
#include "Classifier.h"

using namespace std;

class NearestNeighbourClassifier : public Classifier {

public:

    bool predictPoint(DataPoint*) override;
    short distanceBetweenShots(DataPoint*, DataPoint*) override;

};



