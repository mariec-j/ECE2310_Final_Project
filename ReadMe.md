# Final Project ReadMe

## GitHUb Link: 
https://github.com/mariec-j/ECE2310_Final_Project

## Final Project Screen Shot 
![Final Project UML](<Images\UML-Diagram.png>)

## Explanations: 

### Class Identifications and Purpose:
#### SensorData:
- used to represent one row of the CSV.

#### CSVReader: 
- used to read the file.

#### DataProcessor: 
- used to convert temperature and organize the data categorizing by sensor.

#### FileWriter: 
- used to export subsets of data

#### SensorHub: 
- This will be the central class that coordinates the other classes 
    - (will most likely have the most relationships)


## Defining Relationships between each class:

### SensorData:

**Associations:**
- CSVReader
- DataProcessor
- FileWriter 
    - (Used by)


**Composition:** 
- SensorHub 
    - (Owned by)


**Explanation:** 

CSVReader instantiates SensorData objects when processing the CSV file. 
This is also the same for DataProcessor which takes SensorData to transform values. 
Thirdly, FileWriter receives the list from SensorData to export the subset that is 
required to be viewed by students. Lastly, SensorData is owned by the SensorHub which 
manages the SensorData class’ operation cycle.



### CSVReader:

**Associations:**
- SensorData 
    - (is associated with)


**Dependency:**
- SensorHub 
    - (SensorHub Depends on CSVReader)


**Explanation:** 

SensorHub depends on CSVReader to supply the data which is output from SensorData protocols.



### DataProcessor:

**Dependency:** 
- SensorHub 
    - (Hub depends on DataProcessor)


**Association:** 
- SensorData 
    - (uses)


**Explanation:** 

SensorHub depends on DataProcessor for data transformations, while DataProcessor uses SensorData.



### FileWriter:

**Association:** 
- SensorData 
    - (uses)


**Dependency:**
- SensorHub 
    - (SensorHub depends on FileWriter)


**Explanation:** 

FileWriter uses the SensorData to fill the files it creates with 
information while the SensorHub depends on the 
FileWriter to create and output files.



### SensorHub:

**Composition:** 
- SensorData 
    - (owns)


**Dependency:**
- CSVReader 
    - (uses) 
- DataProcessor 
    - (uses) 
- FileWriter 
    - (uses to output files)


**Explanation:**

SensorHub is the owner of the data within SensorData, it then uses the
CSVReader, DataProcessor, and FileWriter classes to process this data, 
and output a file.