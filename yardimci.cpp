#include<iostream>
#include<cmath>
using namespace std;

double a, b, c, dort = 4, r, h, pi = 3;

string cevap;

double kup(double s1, double s2){
    return pow(s1, s2);

}
double dikd(double s1, double s2, double s3){
    return s1 * s2 * s3;
    
}
double silindir(double s1, double s2, double s3){
    return s1 * s2* s3;
}
double kure(double s1, double s2){
    return s1 * s2;
}

int main(){
    while(1){
        cout <<"=========================" << endl << "1. Kup:" << endl << "2. Dikdortgen:" << endl << "3. Silindir:" << endl << "4. Kure" << endl << "Hangisinin hacmini istiyosun: " << endl;
        cin >> cevap;
        if (cevap == "1")
        {
            cout << "Kenar uzunluğunu gir:" << endl;
            cin >> a;
            cout << "Cevap= " << kup(a, pi) << endl;
        }
        else if (cevap == "2")
        {
            cout << "Kenar uzunluklarını gir:" << endl;
            cin >> a;
            cin >> b;
            cin >> c;
            cout << "Cevap= " << dikd(a, b, c) << endl;
        }
        else if (cevap == "3")
        {
            cout << "Yari capi gir: ";
            cin >> r;
            cout << "Yuksekligi gir: ";
            cin >> h;
            double rk = pow(r, 2.0);
            cout << "Cevap= " << silindir(pi, rk, h) << endl;

        }
        else if (cevap == "4")
        {
            cout << "Yari capi gir: ";
            cin >> r;
            double rku = pow(r, 3.0);
            cout << "Cevap= " << kure(dort, rku) << endl;
        }
        else if (cevap == "q"){
            break;
        }
        else
        {
            cout << "Anlamadim. Tekrar dene:" << endl;
        }
    }


}
