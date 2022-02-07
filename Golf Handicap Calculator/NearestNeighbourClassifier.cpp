#include "NearestNeighbourClassifier.h"

using namespace std;

bool NearestNeighbourClassifier::predictPoint(DataPoint* dataPoint) {

	try {

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

		dataPoint->setClub(this->trainedData.vectorOfDataPoints.at(indexOfClosest)->getClub());
		return true;

	}

	catch (...) {

		cout << "Error making a prediction." << endl;
		return false;

	}

}

short NearestNeighbourClassifier::distanceBetweenShots(DataPoint* learnedShot, DataPoint* predictedShot) {

	return short(abs((learnedShot->getShotDistance() - predictedShot->getShotDistance())));

}



