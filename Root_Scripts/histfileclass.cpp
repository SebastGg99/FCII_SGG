#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

struct EnergyData {
    double MaxEnergyDeposited;
    double MaxEnergy;
    double MinEnergy;
};

EnergyData get_extreme_values(){
    ifstream inputFile;
    inputFile.open("fileclasexx.txt");
    if (!inputFile.is_open()) {
        cerr << "Error al abrir" << endl;
        return {0.0, 0.0, 0.0};
    }
    double MaxEnergyDeposited = 0.0;
    double MinEnergy = 10000.0;
    double MaxEnergy = 0.0;
    int col1, col2;
    double col3, col4, col5, col6, col7, col8;
    double EnergyPerEvent;

    while (!inputFile.eof()) {
        inputFile >> col1 >> col2 >> col3 >> col4 >> col5 >> col6 >> col7 >> col8;
        EnergyPerEvent = sqrt(pow(col4,2)+pow(col5,2)+pow(col6,2)+pow(col7,2));
        if(col8>MaxEnergyDeposited) MaxEnergyDeposited = col8;
        if(EnergyPerEvent>MaxEnergy) MaxEnergy = EnergyPerEvent;
        if(EnergyPerEvent<MinEnergy) MinEnergy = EnergyPerEvent;
    }

    return {MaxEnergyDeposited, MaxEnergy, MinEnergy};
}




int histfileclass() {
    TCanvas *cv = new TCanvas("cv", "mycanvas", 0, 0, 1080, 720);
    cv->Divide(3);
    ifstream inputFile;
    EnergyData Energy = get_extreme_values();
    
    double MaxEnergyDeposited = Energy.MaxEnergyDeposited;
    double MaxEnergy = Energy.MaxEnergy;
    double MinEnergy = Energy.MinEnergy;
    TH1F *h1 = new TH1F("hist", "Total Energy", 100, 0, int(MaxEnergyDeposited));
    TH1F *h2 = new TH1F("hist2", "Deposited Energy", 100, int(MinEnergy), int(MaxEnergy));
    TH1F *h3 = new TH1F("hist3", "Deposited in Total Energy", 100, int(MinEnergy), int(MaxEnergy));
    inputFile.open("fileclasexx.txt");

    // if (!inputFile.is_open()) {
    //     cerr << "Error al abrir" << endl;
    //     return 1;
    // }

    if (!inputFile) {
        cerr << "Error al abrir el archivo." << endl;
        return 1;
    }

    int col1, col2;
    double col3, col4, col5, col6, col7, col8;
    long double TotalEnergy = 0.0;
    double EnergyPerEvent;

    while (!inputFile.eof()) {

        inputFile >> col1 >> col2 >> col3 >> col4 >> col5 >> col6 >> col7 >> col8;

        EnergyPerEvent = sqrt(pow(col4,2)+pow(col5,2)+pow(col6,2)+pow(col7,2));
        cout << "Energía por evento: " << EnergyPerEvent << endl;
        TotalEnergy += EnergyPerEvent;
        h1->Fill(col8);
        h2->Fill(EnergyPerEvent);
        h3->Fill(EnergyPerEvent, col8);
    }

    inputFile.close();
    cout << "Energía total: " << TotalEnergy << endl;
    cv->cd(1);
    h1->Draw();
    cv->cd(2);
    h2->Draw();
    cv->cd(3);
    h3->Draw();
    cv->SaveAs("HistEnergy.pdf");
    return 0;
}