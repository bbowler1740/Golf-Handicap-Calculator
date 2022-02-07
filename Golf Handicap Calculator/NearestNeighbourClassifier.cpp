#include "NearestNeighbourClassifier.h"

using namespace std;

bool NearestNeighbourClassifier::predictPoint(DataPoint* dataPoint) {

	short closestDistance = std::numeric_limits<short>::max();
	short indexOfClosest = 0;

	for (DataPoint* dp : this->trainedData.vectorOfDataPoints) {

		short currDistance = distanceBetweenShots(dp, dataPoint);
		short currIndex = 0;
		if (currDistance < closestDistance) {
			closestDistance = currDistance;
			indexOfClosest = currIndex;
		}

		currIndex++;

	}

}

short NearestNeighbourClassifier::distanceBetweenShots(DataPoint* learnedShot, DataPoint* predictedShot) {

	return short(abs((learnedShot->getShotDistance() - predictedShot->getShotDistance())));

}



