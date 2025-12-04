#include <iostream>
#include "DataProcessor.h"
using namespace std;
#include <list>
#include<map>

//constructor
DataProcessor::DataProcessor(){}

////
list<SensorData> DataProcessor::getProcessedData(){
    return ProcessedData;
}

void DataProcessor::SetProcessedData(list<SensorData> data){
    ProcessedData = data; //data is the var we passed thru in .h
}

//idk, its tricky now
//process data is convert temp to celcius
//list<SensorData> DataProcessor::processData(list<SensorData> data){
   // list<SensorData> processed;
//}

map<string,list<SensorData>> DataProcessor::groupByDevice(list<SensorData> data){
    map<string, list<SensorData>> groupedData;

//does this work, nooo???
string deviceID = SensorData.getDeviceID();

}

//should it be temp or TempC does it matter?
void ProcessedData::convertTempToCelcius(){
   
    double TempF = SensorData.getTemp();
   
    double TempC = (5.0/9.0) * (TempF - 32.0);

    SensorData.setTemp(TempC);
}


