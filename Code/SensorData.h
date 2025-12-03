#ifndef SensorData_H
#define SensorData_H
#include <string>
class SensorData {
    public:
        SensorData(long ts, std::string deviceID, double co, double humidity, bool light, double lpg, bool motion, double smoke, double temp);
        long getTimestamp();
        std::string getDeviceID();
        double getCO();
        double getHumidity();
        bool getLight();
        double getLPG();
        bool getMotion();
        double getSmoke();
        double getTemp();
        void setTemp(double temp);
    
    private:
        long ts;
        std::string deviceID;
        double co;
        double humidity;
        bool light;
        double lpg;
        bool motion;
        double smoke;
        double temp;
};
#endif