//
//  main.cpp
//  22BHW5C
//
//  Created by Albert Liu on 11/6/18.
//  Copyright © 2018 Albert Liu. All rights reserved.
//
/*
 Read data from an input file (patient.txt) into array – 10
 Display to the screen the names of the underweight patients. – 5
 Display to the screen the names of the overweight patients. – 5
 Display to the screen the names of the obese patients. – 5
 Writes report to file (patientReport.txt) – 10
 */


#include <iostream>
#include "Patient.h"
#include <fstream>
#include <string>

using namespace std;

// Global CONSTANTS
const int ARRSIZE = 100;

// Function declaration

void readData(Patient [ARRSIZE] , int &size);
void displayunderweight(const Patient[ARRSIZE], const int size);
void displayoverweight(const Patient[ARRSIZE], const int size);
void displayobese(const Patient[ARRSIZE], const int size);
void writeDataToFile(const Patient[ARRSIZE], const int size);

int main() {
    
    Patient patients[ARRSIZE];
    int size;
    readData(patients, size);

    /*
     for (int i = 0; i < size; i ++)
    {
        patients[i].print();
    }*/
    
    
    displayunderweight(patients, size);
    displayoverweight(patients, size);
    displayobese(patients, size);
    
    writeDataToFile(patients, size);
    
    return 0;
}

/******************************************************
 This function prompts the user to enter the name of the input file.
 It then reads the data from input file into three parallel arrays */
void readData(Patient patients[ARRSIZE], int &size)
{
    string inputfilename;
    ifstream input;
    
    // prompt user for filename
    cout << "\nPlease enter the name of the file that holds datas of patients: \n";
    cin >> inputfilename;
    
    // open the input file
    input.open(inputfilename.c_str());
    if (input.fail())
    {
        cout << "\n\tPlease check the name of the input file and \n\ttry again later!\n";
        exit(EXIT_FAILURE);
    }
    
    // reading
    string pname;
    int page, pweight;
    double pheight;
    int totalpatients = 0;
    
    while (totalpatients < ARRSIZE && input >> page >> pheight >> pweight)
    {
        // cout << page << " " << pheight << " " << pweight;
        getline(input, pname);
        // cout << pname << endl;
        
        patients[totalpatients] = Patient(pname, page, pheight, pweight);
        
        totalpatients ++;
    }
    
    size = totalpatients;
    
    // close the input file
    input.close();
    
    cout << endl;
}

// look through the patient list, and find those who are underweight, and display them
void displayunderweight(const Patient Patients[ARRSIZE], const int size)
{
    cout << "\t\tUnderweight Patients " << endl;
    for (int i = 0; i < size; i ++)
    {
        if (Patients[i].weightStatus() == "Underweight")
        {
            Patients[i].print();
        }
    }
    cout << "\n\n"; 
}

// look through the patient list, and find those who are overweight, and display them
void displayoverweight(const Patient Patients[ARRSIZE], const int size)
{
    cout << "\t\tOverweight Patients " << endl;
    for (int i = 0; i < size; i ++)
    {
        if (Patients[i].weightStatus() == "Overweight")
        {
            Patients[i].print();
        }
    }
    cout << "\n\n";
}

// look through the patient list, and find those who are obese, and display them
void displayobese(const Patient Patients[ARRSIZE], const int size)
{
    cout << "\t\tObese patients " << endl;
    for (int i = 0; i < size; i ++)
    {
        if (Patients[i].weightStatus() == "Obese")
        {
            Patients[i].print();
        }
    }
    cout << "\n\n";
}

/*
 Write the  into the file
 */
void writeDataToFile(const Patient patients[ARRSIZE], const int size)
{
    ofstream outputFile;
    string filename;
    
    cout << "Please enter the filename" << endl;
    cin >> filename;
    
    //open the output file
    outputFile.open(filename.c_str());
    
    outputFile << "\t\t\tWeight Status Report\n";
    outputFile << "====================   ===   ======   ======   =============\n";
    outputFile << "Name                   Age   Height   Weight   Weight Status\n";
    outputFile << "====================   ===   ======   ======   =============\n";

    
    // display ids and scores
    for (int i = 0; i < size ; i++)
    {
        int length = patients[i].getName().size();
        // ;
        outputFile << patients[i].getName().append(23 - length, ' ');
        outputFile << patients[i].getAge() << "    " << patients[i].getHeight() << "       ";
        outputFile << patients[i].getWeight() << "        " << patients[i].weightStatus() << endl;
    }
    outputFile << "====================   ===   ======   ======   =============\n";
    outputFile << "Total number of patients: " << size;
    
    //close the output file
    outputFile.close();
}

/*********
 OUTPUT:
 
 
 Please enter the name of the file that holds datas of patients:
 patients.txt
 
 Underweight Patients
 Patient name: Paul West
 Age: 31
 Height: 71 Weight: 122
 Weight Status: Underweight
 Patient name: Laura King
 Age: 42
 Height: 67 Weight: 115
 Weight Status: Underweight
 
 
 Overweight Patients
 Patient name: Linda East
 Age: 52
 Height: 69 Weight: 175
 Weight Status: Overweight
 
 
 Obese patients
 Patient name: Tim South
 Age: 64
 Height: 72 Weight: 251
 Weight Status: Obese
 Patient name: Tom Baker
 Age: 39
 Height: 73 Weight: 229
 Weight Status: Obese
 Patient name: William Peterson
 Age: 54
 Height: 70 Weight: 215
 Weight Status: Obese
 Patient name: Peter Pan
 Age: 52
 Height: 75 Weight: 270
 Weight Status: Obese
 Patient name: Andrew Davis
 Age: 69
 Height: 72 Weight: 254
 Weight Status: Obese
 
 
 Please enter the filename
 patientReport.txt
 Program ended with exit code: 0
 */

