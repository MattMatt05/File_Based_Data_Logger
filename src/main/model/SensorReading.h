#ifndef SENSORREADING_H
#define SENSORREADING_H

#include <iostream>
#include <random>

class SensorReading
{
private:
    float temperature;
    float pressure;
    float voltage;

    void setTemperature(float temperature);
    void setPressure(float pressure);
    void setVoltage(float voltage);
    void generateRandomData();

public:
    SensorReading();

    float getTemperature() const;
    float getPressure() const;
    float getVoltage() const;
};

#endif
