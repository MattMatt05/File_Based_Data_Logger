#include <iostream>
#include <string>
#include <chrono>
#include <thread>

#include "SensorReading.h"

using namespace std;

// This header class serves as a collection of sensor readings which provides important statistics.
class SensorCollection
{
private:
    vector<SensorReading> sensorReadingList;
    bool continueReading = true;

    // MODIFIES: sensorReadingList
    // EFFECTS: adds new a sensorReading
    void addSensorReading(SensorReading sensorReading)
    {
    }

public:
    SensorCollection()
    {
        simulateSensorReading();
    }

    // MODIFIES: sensorReadingList
    // EFFECTS: simulates the inflow of sensor data, waits 3 seconds before collecting a sample;
    void simulateSensorReading()
    {
    }
};