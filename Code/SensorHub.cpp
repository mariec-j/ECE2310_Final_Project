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
    
}


void SensorHub::processData() {
    
}


void SensorHub::exportData() {

}