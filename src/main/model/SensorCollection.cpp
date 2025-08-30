#include "SensorCollection.h"

using namespace std;
SensorCollection::SensorCollection() {
    simulateSensorReading();
}

void SensorCollection::addSensorReading(SensorReading sensorReading) {
    sensorReadingList.push_back(sensorReading);
}

void SensorCollection::simulateSensorReading() {
    while (continueReading) {
        SensorReading sr;
        addSensorReading(sr);
        this_thread::sleep_for(std::chrono::seconds(1));
        cout << "Pressure: " << sr.getPressure() << "  Temp: " << sr.getTemperature() << "  Voltage: " << sr.getVoltage() << endl;
    }
}
