#ifndef ProcessorData_H
#define ProcessorData_H

#include SensorData_H
#include <string>
#include <list>
using namespace std;
#include<map>

class ProcessorData{

    public:
    //constructor
    ProcessorData();
    //acessor
    list<SensorData> getProcessedData(); //so this has a private var

    //
   void SetProcessedData (list<SensorData> data); //passing thru data 

    list<SensorData> processData(list<SensorData> data);

    map<string list<SensorData> groupByDevice(list<SensorData> data);

    private:
    list<SensorData> ProcessedData;
};

#endif