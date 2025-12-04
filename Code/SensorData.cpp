#include <iostream>
#include "SensorData.h"
using namespace std;

SensorData::SensorData(long ts, string deviceID, double co, double humidity, bool light, double lpg, bool motion, double smoke, double temp){
    this->ts = ts;
    this->deviceID = deviceID;
    this->co = co;
    this->humidity = humidity;
    this->light = light;
    this->lpg = lpg;
    this->motion = motion;
    this->smoke = smoke;
    this->temp = temp;
}

long SensorData::getTimestamp() const{
    return ts;
}

string SensorData::getDeviceID() const{
    return deviceID;
}

double SensorData::getCO() const {
    return co;
}

double SensorData::getHumidity() const {
    return humidity;
}

bool SensorData::getLight() const {
    return light;
}

double SensorData::getLPG() const {
    return lpg;
}

bool SensorData::getMotion() const {
    return motion;
}

double SensorData::getSmoke() const {
    return smoke;
}

double SensorData::getTemp() const {
    return temp;
}

void SensorData::setTemp(double temp){
    this->temp = temp;
}