#include "SensorHub.h"
using namespace std;

//Constructors

SensorHub::SensorHub() {}


// Accessors

list<SensorData> SensorHub::getData() const {
    return data;
}


CSVReader SensorHub::getCSVReader() const {
    return reader;
}


DataProcessor SensorHub::getDataProcessor() const {
    return processor;
}


FileWriter SensorHub::getFileWriter() const {
    return writer;
}


// Setters

void SensorHub::Data(list<SensorData> data) {
    this->data = data;
}


void SensorHub::setCSVReader(CSVReader reader) {
    this->reader = reader;
}


void SensorHub::setDataProcessor(DataProcessor processor) {
    this->processor = processor;
}


void SensorHub::setFileWriter(FileWriter writer) {
    this->writer = writer;
}


// Collecting functions, or make them do their function

void SensorHub::collectData() {
    data = reader.readData();
    processor.SetProcessedData(data);
    cout << "Data collected! (or not...) Exiting Function.\n\n";
}

void SensorHub::processData() {
    int response;
    map<string, list<SensorData>> groupedMap;
    groupedMap.clear();
    list<SensorData> data_temp;
    data_temp.clear();

    cout << "\nWelcome to the Data Processing Section!\n"
        << "Select how it will be processed.\n"
        << "Please select a function by typing down a number:\n"
        << "1 --> convertTempToCelcius()\n"
        << "2 --> groupByDevice()\n> ";
    cin >> response;
    cout << "\n\nProcessing . . .";

    switch (response) {
    case 1:
        processor.convertTempToCelcius();
        data = processor.getProcessedData();
        processor.SetProcessedData(data);
        break;
    
    case 2:
        
        groupedMap = processor.groupByDevice(data);
        for (const auto& deviceID : groupedMap) {
            const list<SensorData> sensorGroup = deviceID.second; 
            for (const auto& sensorElement : sensorGroup)
                data_temp.push_back(sensorElement);
        }
        data = data_temp;
        processor.SetProcessedData(data);
        break;

    default:
        cout << "\nOopsies, Invalid! Exiting Function.";
        return;
        break;
    }
    cout << "\nProcessing Done! Exiting Function.";
}


void SensorHub::exportData() {
    string directory;
    int n;
    string attribute;
    string fileName;

    cout << "\nPlease write a directory for export:\n> ";
    cin >> directory;

    cout << "\nPlease write a fileName for the file:\n> ";
    cin >> fileName;

    writer.setOutputDirectory(directory);

    cout << "\nWriting " << fileName << " to: " << writer.getOutputDirectory() << endl;
    cout << "Would you like to write by Attribute (1) or not (0).\n"
        << "Please type a number to do so.\n> ";
    cin >> n;

    switch (n)
    {
    case 1:
        writer.writeByAttribute(data, fileName);
        break;
    case 0:
        cout << "\nWhat Attribute?\n >";
        cin >> attribute;
        writer.writeData(data, attribute);
        break;
    
    default:
        cout << "\nOopsies, Invalid! Exiting Function.";
        return;
        break;
    }

    cout << "\nWriting Done! Exiting Function.";
    
}