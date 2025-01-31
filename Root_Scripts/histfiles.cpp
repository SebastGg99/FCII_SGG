#include <iostream>
#include <fstream>
#include <cmath>
#include <limits>


using namespace std;

/*int histfiles() {

    // Crear un canvas para visualizar el histograma
    TCanvas *cv = new TCanvas("cv", "Histograma de Energia", 0, 0, 1080, 1080);
    
    // Crear el histograma con un rango inicial amplio
    TH1F *h1 = new TH1F("hist", "Distribucion de Energia;Energia;Frecuencia", 100, 0, 100);
    
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
    int i = 0;

    while (!inputFile.eof()) {

        inputFile >> col1 >> col2 >> col3 >> col4 >> col5 >> col6 >> col7 >> col8;

        EnergyPerEvent = sqrt(pow(col4,2)+pow(col5,2)+pow(col6,2)+pow(col7,2));
        cout << "Energía por evento: " << EnergyPerEvent << endl;
        TotalEnergy += EnergyPerEvent;
        h1->Fill(col8);
        i++;
    }

    inputFile.close();
    cout << "Energía total: " << TotalEnergy << endl;
    h1->Draw();
    cv->SaveAs("HistEnergy.pdf");
    return 0;
}

int main() {
    return histfiles();
}*/

int histfiles() {
    // Crear un canvas para el histograma
    TCanvas *cv = new TCanvas("cv", "Histograma de Energia Depositada", 0, 0, 1080, 1080);
    
    // Crear el histograma con un rango adecuado (ajustado dinámicamente después)
    TH1F *h1 = new TH1F("hist", "Distribucion de Energia Depositada;Energia (GeV);Frecuencia", 100, 0, 100);

    ifstream inputFile("fileclasexx.txt");

    if (!inputFile) {
        cerr << "Error al abrir el archivo." << endl;
        return 1;
    }

    int col1, col2;
    double col3, col4, col5, col6, col7, col8;
    long double TotalEnergy = 0.0;
    double EnergyPerEvent;

    // Inicializar min y max con valores extremos
    double minEnergy = std::numeric_limits<double>::max();
    double maxEnergy = std::numeric_limits<double>::lowest();

    while (inputFile >> col1 >> col2 >> col3 >> col4 >> col5 >> col6 >> col7 >> col8) {
        // Calcular la energía depositada por evento
        EnergyPerEvent = sqrt(pow(col4, 2) + pow(col5, 2) + pow(col6, 2) + pow(col7, 2));

        cout << "Energía depositada por evento: " << EnergyPerEvent << endl;
        TotalEnergy += EnergyPerEvent;
        
        // Llenar el histograma con la energía depositada
        h1->Fill(col8);

        // Actualizar mínimo y máximo
        if (EnergyPerEvent < minEnergy) minEnergy = EnergyPerEvent;
        if (EnergyPerEvent > maxEnergy) maxEnergy = EnergyPerEvent;
    }

    inputFile.close();
    cout << "Energía total depositada: " << TotalEnergy << endl;
    cout << "Energía mínima depositada: " << minEnergy << endl;
    cout << "Energía máxima depositada: " << maxEnergy << endl;

    // Ajustar los ejes del histograma al rango real de los datos
    h1->GetXaxis()->SetRangeUser(minEnergy, maxEnergy);
    h1->Draw();

    // Guardar el histograma en un archivo
    cv->SaveAs("HistEnergyDeposited.pdf");

    return 0;
}

int main() {
    return histfiles();
}




/*int histfiles() {
    // Crear un canvas para visualizar el histograma
    TCanvas *cv = new TCanvas("cv", "Histograma de Energía", 0, 0, 1080, 1080);
    
    // Crear el histograma con un rango inicial amplio
    TH1F *h1 = new TH1F("hist", "Distribución de Energía;Energía;Frecuencia", 100, 0, 100);

    // Abrir el archivo de datos
    ifstream inputFile("fileclasexx.txt");

    if (!inputFile) {
        cerr << "Error al abrir el archivo." << endl;
        return 1;
    }

    int col1, col2;
    double col3, col4, col5, col6, col7, col8;
    long double TotalEnergy = 0.0;
    double EnergyPerEvent;
    //double minEnergy = 1e9, maxEnergy = -1e9; // Para encontrar los valores extremos

    int count = 0; // Contador de eventos leídos

    // Leer datos correctamente
    while (inputFile >> col1 >> col2 >> col3 >> col4 >> col5 >> col6 >> col7 >> col8) {
        EnergyPerEvent = sqrt(pow(col4, 2) + pow(col5, 2) + pow(col6, 2) + pow(col7, 2));
        
        cout << "Energía por evento: " << EnergyPerEvent << endl;
        
        TotalEnergy += EnergyPerEvent;
        h1->Fill(col8);

        // Actualizar valores mínimo y máximo
        if (EnergyPerEvent < minEnergy) minEnergy = EnergyPerEvent;
        if (EnergyPerEvent > maxEnergy) maxEnergy = EnergyPerEvent;

        count++;
    }

    inputFile.close();

    // Mensajes de depuración
    cout << "Energía total: " << TotalEnergy << endl;
    cout << "Número total de eventos: " << count << endl;
    cout << "Rango de energías: " << minEnergy << " - " << maxEnergy << endl;

    // Ajustar automáticamente el eje X del histograma si los valores están fuera del rango
    if (maxEnergy > 100 || minEnergy < 0) {
        h1->SetBins(100, minEnergy, maxEnergy);
    }

    // Dibujar y guardar el histograma
    h1->Draw();
    cv->Update(); // Asegurar que ROOT procese la visualización antes de guardar
    cv->SaveAs("HistEnergy.pdf");

    return 0;
}

int main() {
    return histfiles();
}*/

/////////////////////////////////////////////////////////////code/////////////////////////////////////////////
/*#include <iostream>
#include <fstream>
#include <cmath>
#include <limits>
#include <TCanvas.h>
#include <TH1F.h>

using namespace std;

int histfiles() {
    TCanvas *cv = new TCanvas("cv", "Histograma de Energia", 0, 0, 1080, 1080);
    TH1F *h1 = new TH1F("hist", "Distribucion de Energia;Energia;Frecuencia", 100, 0, 100);

    ifstream inputFile("fileclasexx.txt");

    if (!inputFile) {
        cerr << "Error al abrir el archivo." << endl;
        return 1;
    }

    int col1, col2;
    double col3, col4, col5, col6, col7, col8;
    long double TotalEnergy = 0.0;
    double EnergyPerEvent;
    int i = 0;

    // Inicializar min y max con valores extremos
    double minEnergy = std::numeric_limits<double>::max();
    double maxEnergy = std::numeric_limits<double>::lowest();

    while (inputFile >> col1 >> col2 >> col3 >> col4 >> col5 >> col6 >> col7 >> col8) {
        EnergyPerEvent = sqrt(pow(col4, 2) + pow(col5, 2) + pow(col6, 2) + pow(col7, 2));
        cout << "Energía por evento: " << EnergyPerEvent << endl;
        TotalEnergy += EnergyPerEvent;
        h1->Fill(EnergyPerEvent);

        // Actualizar mínimo y máximo
        if (EnergyPerEvent < minEnergy) minEnergy = EnergyPerEvent;
        if (EnergyPerEvent > maxEnergy) maxEnergy = EnergyPerEvent;

        i++;
    }

    inputFile.close();
    cout << "Energía total: " << TotalEnergy << endl;
    cout << "Energía mínima: " << minEnergy << endl;
    cout << "Energía máxima: " << maxEnergy << endl;

    h1->Draw();
    cv->Update();
    cv->SaveAs("HistEnergy.pdf");

    return 0;
}

int main() {
    return histfiles();
}
*/
