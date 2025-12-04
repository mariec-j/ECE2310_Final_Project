#include "FileWriter.h"
#include <fstream>
#include <iostream>
using namespace std;

FileWriter::FileWriter(const string& outputDirectory):outputDirectory(outputDirectory){}

string FileWriter::getOutputDirectory() const{
    return outputDirectory;
}

void FileWriter::setOutputDirectory (const string& directory){
    outputDirectory = directory;
}

void FileWriter::writeData (vector<SensorData>& data, const string& fileName) {
    ofstream outFile(outputDirectory + "/" + fileName);
    if (!outFile.is_open()){
        cerr << "Error: Could not open file for writing: " << fileName << endl;
        return;
    }
    outFile <<"ts,device,co,humidity,light,lpg,motion,smoke,temp\n";

    for (auto& row : data){
        outFile << row.getTimestamp() << ","
                << row.getDeviceID() << ","
                << row.getCO() << ","
                << row.getHumidity() << ","
                << (row.getLight() ? "TRUE" : "FALSE") << ","
                << row.getLPG() << ","
                << (row.getMotion() ? "TRUE" : "FALSE") << ","
                << row.getSmoke() << ","
                << row.getTemp() << "\n";
    }
    outFile.close();
}

void FileWriter::writeByAttribute(vector<SensorData>& data, const string& attribute) {
    std::ofstream outFile(outputDirectory + "/" + attribute + ".csv");

    if (!outFile.is_open()) {
        std::cerr << "Error: Could not open file for writing: " << attribute << ".csv" << std::endl;
        return;
    }

    // Write header
    outFile << "ts,device," << attribute << "\n";

    // Write rows
    for (auto& row : data) {
        outFile << row.getTimestamp() << ","
                << row.getDeviceID() << ",";

        if (attribute == "co") outFile << row.getCO();
        else if (attribute == "humidity") outFile << row.getHumidity();
        else if (attribute == "light") outFile << (row.getLight() ? "TRUE" : "FALSE");
        else if (attribute == "lpg") outFile << row.getLPG();
        else if (attribute == "motion") outFile << (row.getMotion() ? "TRUE" : "FALSE");
        else if (attribute == "smoke") outFile << row.getSmoke();
        else if (attribute == "temp") outFile << row.getTemp();

        outFile << "\n";
    }
    outFile.close();
}