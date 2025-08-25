#include <iostream>
#include <string>
#include "SensorReading.cpp"

using namespace std;

// This class is serves as a collection of sensor readings which provides important statistics.
class SensorCollection
{
private:
    vector<SensorReading> sensorReadingList;

    // MODIFIES: sensorReadingList
    // EFFECTS: adds new a sensorReading
    void addSensorReading(SensorReading sensorReading) {
        sensorReadingList.push_back(sensorReading);
    }

public:
    SensorCollection()
    {

    }
};