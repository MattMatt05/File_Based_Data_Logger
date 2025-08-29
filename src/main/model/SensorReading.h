#include <iostream>
#include <random>

using namespace std;
// This class represents a sample point
// SensorReading is a class that represents a sample from a sensor reading.
class SensorReading
{
private:
    float temperature;
    float pressure;
    float voltage;

    // MODIFIES: temperature
    void setTemperature(float temperature)
    {
        this->temperature = temperature;
    }

    // MODIFIES: pressure
    void setPressure(float pressure)
    {
        this->pressure = pressure;
    }

    // MODIFIES: voltage
    void setVoltage(float voltage)
    {
        this->voltage = voltage;
    }

    // MODIFIES: temperature, pressure, voltage
    // EFFECTS: generates random samples that are within range standard range for temperature, pressure, and voltage
    void generateRandomData()
    {
        
    }

public:
    // The default constructor
    SensorReading()
    {
        generateRandomData();
    }

    // EFFECTS: returns the temperature
    float getTemperature()
    {
        return temperature;
    }

    // EFFECTS: returns the pressure
    float getPressure()
    {
        return pressure;
    }

    // EFFECTS: returns the voltage
    float getVoltage()
    {
        return voltage;
    }
};