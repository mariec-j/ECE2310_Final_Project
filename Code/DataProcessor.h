#ifndef DataProcessor_H
#define DataProcessor_H

#include "SensorData.h"
#include <string>
#include <list>
#include <map>
using namespace std;


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

   //not needed same as convertTempToCelcius
   // list<SensorData> processData(list<SensorData> data);

    map<string,list<SensorData>> groupByDevice(list<SensorData> data);

    //Deconstructor idky
    ~DataProcessor();

    private:
    list<SensorData> ProcessedData;

};

#endif