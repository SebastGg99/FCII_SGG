#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int readfile() {
    ifstream inputFile;
    inputFile.open("fileclasexx.txt");

    if (!inputFile.is_open()) {
        cerr << "Error al abrir" << endl;
        return 1;
    }

    int col1, col2;
    double col3, col4, col5, col6, col7, col8;
    long double TotalEnergy = 0.0;
    double EnergyPerEvent;

    while (!inputFile.eof()) {

        inputFile >> col1 >> col2 >> col3 >> col4 >> col5 >> col6 >> col7 >> col8;

        /*cout << col1 << " " << col2 << " " 
             << col3 << " " << col4 << " "
             << col5 << " " << col6 << " "
             << col7 << " " << col8 << endl;*/
        EnergyPerEvent = sqrt(pow(col4,2)+pow(col5,2)+pow(col6,2)+pow(col7,2));
        cout << "Energía por evento: " << EnergyPerEvent << endl;
        TotalEnergy += EnergyPerEvent;
    }

    inputFile.close();
    cout << "Energía total: " << TotalEnergy << endl;
    return 0;
}