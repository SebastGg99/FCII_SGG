#include "iostream"
using namespace std;

void mypdf(){
    TCanvas *cv = new TCanvas("cv", "mycanvas", 0, 0, 1000, 1000);
    TH1F *h1 = new TH1F("hist", "histogram", 100, -10, 10);
    TF1 *f1 = new TF1("func", "abs(sin(x)/x)", -10, 10);
    h1 ->FillRandom("gaus", 1000);
    cv->Divide(2);
    float sum = 0;
    for (int i=1; i<100; i++) {
        float c1 = h1->GetBinContent(i-1) + h1->GetBinContent(i);
        //float c2 = h1->GetBinContent(i);
        sum = c1 + sum;
        h1->Fill(h1->GetBinCenter(i), c1);
        cout<<sum<<endl;
        }
    h1->Draw();
    //cv->SetLogx();
    cv->SaveAs("myfirsttry.pdf");
}