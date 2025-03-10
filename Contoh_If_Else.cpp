#include <iostream>
using namespace std;

double luas, alas, tinggi;

void prosedurinput(){
 cout << "Masukkan Nilai Alas : ";
 cin >> alas;

 cout << "Masukkan Nilai Tinggi : ";
 cin >> tinggi;
}



double hitungluas2 (double a, double t){
    return 0.5 * a * t;
}

string ukuransegitiga(double l){
    if (l>60)
    {
        return "Besar";
    }
    else {
        return "Kecil";
    }
}

void proseduroutput2(){
    cout << "luas segitiga = " << ukuransegitiga(hitungluas2(alas, tinggi)) << endl;
}

int main(){
prosedurinput();
proseduroutput2();   
}
