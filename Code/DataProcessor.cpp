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
list<SensorData> DataProcessor::processData(list<SensorData> data){

}





map<string,list<SensorData>> DataProcessor::groupByDevice(list<SensorData> data){
    
}





//do I pass anything thru this???
void ProcessedData::convertTempToCelcius(){
    TempC = (5/9) * (TempF - 32);
    return Cel;
}


