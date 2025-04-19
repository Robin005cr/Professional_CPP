/*
* project   : https://github.com/Robin005cr/Professional_CPP
* file name : ReadNPrint.cpp
* author    : Robin CR
* mail id   : robinchovallurraju@gmail.com
* LinkedIn  : https://www.linkedin.com/in/robin-cr/
* portfolio : https://robin005cr.github.io/
*
* Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
* Suggestions for improvements or better methods are always welcome and appreciated.
* I value constructive feedback and aim to continuously improve the quality of the work.
*
*/
#include <iostream>
#include <fstream>

using namespace std; 

int main() {

    // open a text file for reading
    ifstream my_file("example.txt");

    // check the file for errors
    if(!my_file) {
        cout << "Error: Unable to open the file." << endl;
        return 1; 
    }

    // store the contents of the file in "line" string
    string line;

    // loop until the end of the text file
    while (!my_file.eof()) {

        // store the current line of the file
        // in the "line" variable
        getline(my_file, line);

        // print the line variable
        cout << line << endl;
    }

    // close the file
    my_file.close();

    return 0;
}