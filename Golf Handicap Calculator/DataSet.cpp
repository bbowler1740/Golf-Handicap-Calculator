#include "DataSet.h"

using namespace std;

class DataSet {

protected:

    std::vector<DataPoint*> vectorOfDataPoints;

public:

    DataSet();

    void addPoint(DataPoint* dataPoint) {

        this->vectorOfDataPoints.push_back(dataPoint);

    }

    void removePoint(DataPoint*);

    void displayDataSet();


};



