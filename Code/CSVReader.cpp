#include "CSVReader.h"
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
using namespace std;

CSVReader::CSVReader() { filePath = ""; }

CSVReader::CSVReader(const string& filePath) : filePath(filePath) {}

string CSVReader::getFilePath() const {
    return filePath;
}

void CSVReader::setFilePath(const string& newFilePath) {
    filePath = newFilePath;
}

list<SensorData> CSVReader::readData() const {
    list<SensorData> dataList;
    ifstream file(filePath);
//for debugging, might remove later?
    if (!file.is_open()) {
        cerr << "Error: Could not open file " << filePath << endl;
        return dataList;
    }

    string line;
    // Skip header
    getline(file, line);

    while (getline(file, line)) {
        stringstream ss(line);
        string ts, device, co, humidity, light, lpg, motion, smoke, temp;

        getline(ss, ts, ',');
        getline(ss, device, ',');
        getline(ss, co, ',');
        getline(ss, humidity, ',');
        getline(ss, light, ',');
        getline(ss, lpg, ',');
        getline(ss, motion, ',');
        getline(ss, smoke, ',');
        getline(ss, temp, ',');

        SensorData row(
            stol(ts), device, stod(co), stod(humidity), (light == "TRUE"), stod(lpg), (motion == "TRUE"), stod(smoke), stod(temp)
        );

        dataList.push_back(row);
    }

    file.close();
    return dataList;
}