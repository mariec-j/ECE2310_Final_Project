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

//key is strign  and we are gonna put deviceID into the string
//deviceID is key, and each string var has an int that is assigned to it
//"string"--> 0
//"string"--> 1
//....

//this is how you go through a list and we need this bc we need to go thru the entire list of DeviceID
//auto
for(const auto& dataElement: data){

//getting/setting deivceID by accessing it from SensorData and retriving the value thrui getDeviceID
string deviceID = dataElement.getDeviceID();
//getDeviceID will either add the DeviceID to the key or if already added will just access DeviceID

//we are now indexing our dataID assigning a hmerical value to each row under device
groupedData[deviceID].push_back(dataElement);
}
return groupedData;
}

//should it be temp or TempC does it matter?
void ProcessedData::convertTempToCelcius(){
   
    double TempF = SensorData.getTemp();
   
    double temp = (5.0/9.0) * (TempF - 32.0);

    SensorData.setTemp(temp);
}


