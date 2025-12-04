#ifndef CSVREADER_H
#define CSVREADER_H
#include <string>
#include <list>
#include <sstream>
#include <fstream>
#include <iostream>
#include "SensorData.h"
using namespace std;

class CSVReader {
    public:
        CSVReader();
    
        CSVReader(const string& filePath);

        string getFilePath() const;

        void setFilePath(const string& newFilePath);

        list<SensorData> readData() const;

    private:
        string filePath;
};

#endif