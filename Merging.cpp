#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inFile1("Data1.txt");
    ifstream inFile2("Data2.txt");
    ofstream outFile("Output.txt");

    string line1;
    string line2;

    getline(inFile1, line1);
    getline(inFile2, line2);

    while (!inFile1.eof() && !inFile2.eof())
    {
        if (line1 < line2) {
            cout << "Line 1 is less than line 2" << endl;
            outFile << line1 << endl;
            getline(inFile1, line1);
        }
        else {
            cout << "Line 2 is less than line 1" << endl; 
            outFile << line2 << endl;
            getline(inFile2, line2);
        }
    }

    while (getline(inFile1, line1)) {
        outFile << line1 << endl;
    }

    while (getline(inFile2, line2)) {
        outFile << line2 << endl;
    }

    inFile1.close();
    inFile2.close();
    outFile.close();

    return 0;
}