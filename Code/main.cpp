#include "CSVReader.h"
#include "DataProcessor.h"
#include "FileWriter.h"
#include "SensorData.h"
#include "SensorHub.h"
#include <iostream>
#include <map>
#include <vector>
#include <list>
#include <string>

using namespace std;

int main() {

    // Most of main will be done in pseudo code in a comment block!!!!!!!!
    int SystemToggle;

    cout << "\n\nStart?\n"
        << "1 --> Yes\n"
        << "0 --> No\n> ";
    cin >> SystemToggle;

    /**
     * @brief main is used as the means for a user to interface with SensorHub.
     * It will primarily call functions from SensorHub to read/write/process the .csv file.
     * 
     * ---------------------------------------- PSEUDO CODE ----------------------------------------
     * 
     *  while(SystemToggle) <-- keep looping till User sets it as 0, loops as follows:
     *      Initialize a SensorHub object
     *      Initialize SensorHub private variables
     *      
     *      Call .collectData();
     *      Call .processData();
     *      Call .exportData();
     * 
     *      Prompt if the loop should be done again?
     *      1 --> Yes
     *      0 --> No
     *      Store user input to SystemToggle
     * 
     * ---------------------------------------------------------------------------------------------
     * 
     */

    return 0;
}