#ifndef ProcessorData_H
#define ProcessorData_H

#include SensorData_H
#include <string>
#include <list>
using namespace std;

class ProcessorData{

    public:
    //constructor
    ProcessorData();

    list<SensorData> getProcessedData() const; //so this has a private var

    list<SensorData> SetProcessedData (const list<SensorData> data); //const???, IDk bc gettinging data so cant change 

    list<SensorData> processData(const list<SensorData> data);

    private:
    list<SensorData> ProcessedData;

};

#endif