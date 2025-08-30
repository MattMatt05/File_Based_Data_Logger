#include "SensorReading.h"
#include <random>
#include <iostream>

using namespace std;
void SensorReading::setTemperature(float temp)
{
    temperature = temp;
}

void SensorReading::setPressure(float pres)
{
    pressure = pres;
}

void SensorReading::setVoltage(float volt)
{
    voltage = volt;
}

void SensorReading::generateRandomData()
{
    random_device rd;
    mt19937 gen(rd());

    uniform_real_distribution<> tempDist(20.0, 30.0);
    uniform_real_distribution<> presDist(950.0, 1050.0);
    uniform_real_distribution<> voltDist(3.0, 5.0);

    setTemperature(static_cast<float>(tempDist(gen)));
    setPressure(static_cast<float>(presDist(gen)));
    setVoltage(static_cast<float>(voltDist(gen)));
}

SensorReading::SensorReading()
{
    generateRandomData();
}

float SensorReading::getTemperature() const
{
    return temperature;
}

float SensorReading::getPressure() const
{
    return pressure;
}

float SensorReading::getVoltage() const
{
    return voltage;
}
