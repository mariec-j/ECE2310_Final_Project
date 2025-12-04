#ifndef DataProcessor_H
#define DataProcessor_H

#include "SensorData.h"
#include <string>
#include <list>
using namespace std;
#include<map>

class DataProcessor{

    public:
    //constructor
    DataProcessor();

    //what else do I do to this?
    void convertTempToCelcius();

    //acessor
    list<SensorData> getProcessedData(); //so this has a private var

    //
   void SetProcessedData (list<SensorData> data); //passing thru data 

    list<SensorData> processData(list<SensorData> data);

    map<string,list<SensorData>> groupByDevice(list<SensorData> data);

    //Deconstructor idky
    ~DataProcessor();

    private:
    list<SensorData> ProcessedData;

};

#endif