#ifndef FILEWRITER_H
#define FILEWRITER_H
#include <string>
#include <list>
#include "SensorData.h"
using namespace std;

class FileWriter{
    private: 
        string outputDirectory;

    public:
        FileWriter ();

        FileWriter (const string& outputDirectory);

        string getOutputDirectory() const;

        void setOutputDirectory(const string& directory);

        void writeData(const list<SensorData>& data, const string& fileName) const;
        void writeByAttribute(const list<SensorData>& data, const string& attribute) const;
};

#endif