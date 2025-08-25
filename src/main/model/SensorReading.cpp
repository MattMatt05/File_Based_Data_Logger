#include <iostream>
#include <string>
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
    float setTemperature(float temperature)
    {
        this->temperature = temperature;
    }

    // MODIFIES: pressure
    float setPressure(float pressure)
    {
        this->pressure = pressure;
    }

    // MODIFIES: voltage
    float setVoltage(float voltage)
    {
        this->voltage = voltage;
    }


public:
    // The default constructor
    SensorReading()
    {
        generateRandomData();
    }

    // MODIFIES: temperature, pressure, voltage
    // EFFECTS: generates random samples that are within range standard range for temperature, pressure, and voltage
    void generateRandomData()
    {
        random_device random;
        mt19937 gen(random());

        // Temperature: 18-28°C
        uniform_real_distribution<float> temp_dist(18.0, 28.0);
        temperature = temp_dist(gen);

        // Pressure: 1000-1030 hPa
        uniform_real_distribution<float> press_dist(1000.0, 1030.0);
        pressure = press_dist(gen);

        // Voltage: 3.0-3.6V
        uniform_real_distribution<float> volt_dist(3.0, 3.6);
        voltage = volt_dist(gen);
    }
};