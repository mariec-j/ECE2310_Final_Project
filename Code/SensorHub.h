#ifndef SENSORHUB_H
#define SENSORHUB_H

#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <iostream>
#include "SensorData.h"
#include "FileWriter.h"
#include "DataProcessor.h"
#include "CSVReader.h"

using namespace std;

class SensorHub {
    public:
    //Constructors
        SensorHub();

    // Accessors
        list<SensorData> getData() const;
        CSVReader getCSVReader() const;
        DataProcessor getDataProcessor() const;
        FileWriter getFileWriter() const;
    
    // Setters
        void Data(list<SensorData> data);
        void setCSVReader(CSVReader reader);
        void setDataProcessor(DataProcessor processor);
        void setFileWriter(FileWriter writer);

    // Collecting functions, aka make them do their function
        void collectData();
        void processData();
        void exportData();
    
    private:
        list<SensorData> data;
        CSVReader reader;
        DataProcessor processor;
        FileWriter writer;

};

#endif