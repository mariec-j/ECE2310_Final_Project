#include <iostream>
#include "ProcessorData.h"
using namespace std;
#include <list>
#include<map>

//constructor
DataProcessor::DataProcessor(){}

////
list<SensorData> DataProcessor::getProcessedData(){
    return ProcessedData;
}

list<SensorData> DataProcessor::SetProcessedData(){
    ProcessedData = data; //data is the var we passed thru in .h
}

//idk, its tricky now
list<SensorData> DataProcessor::processData(){
}

list<SensorData> DataProcessor::groupByDevice(){
}


