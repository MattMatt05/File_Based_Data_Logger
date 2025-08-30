#ifndef SENSORCOLLECTION_H
#define SENSORCOLLECTION_H

#include <iostream>
#include <vector>
#include <chrono>
#include <thread>
#include "SensorReading.h"

// Avoid `using namespace std` in headers to prevent polluting global namespace

using namespace std;
class SensorCollection {
private:
    vector<SensorReading> sensorReadingList;
    bool continueReading = true;

    void addSensorReading(SensorReading sensorReading);  // Declaration only

public:
    SensorCollection();  // Default constructor
    void simulateSensorReading();
};

#endif
