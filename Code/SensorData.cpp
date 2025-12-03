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

long SensorData::getTimestamp(){
    return ts;
}

string SensorData::getDeviceID(){
    return deviceID;
}

double SensorData::getCO(){
    return co;
}

double SensorData::getHumidity(){
    return humidity;
}

bool SensorData::getLight(){
    return light;
}

double SensorData::getLPG(){
    return lpg;
}

bool SensorData::getMotion(){
    return motion;
}


