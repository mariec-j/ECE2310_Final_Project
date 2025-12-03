#ifndef SensorData_H
#define SensorData_H
#include <string>
class SensorData {
    public:
        SensorData(long ts, string deviceID, double co, double humidity, bool light, double lpg, bool motion, double smoke, double temp);
        long getTimestamp();
        string getDeviceID();
        double getCO();
        double getHumidity();
        bool getLight();
        double getLPG();
        bool getMotion();
        double getSmoke();
        double getTemp();
        void setTemp(double temp);
        void convertTempToCelsius();
    
    private:
        long ts;
        string deviceID;
        double co;
        double humidity;
        bool light;
        double lpg;
        bool motion;
        double smoke;
        double temp;
};
#endif