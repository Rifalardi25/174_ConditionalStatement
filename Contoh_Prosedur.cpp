#include <iostream>
using namespace std;

double luas, alas, tinggi;

void prosedurinput(){
 cout << "Masukkan Nilai Alas : ";
 cin >> alas;

 cout << "Masukkan Nilai Tinggi : ";
 cin >> tinggi;
}

void prosedurmenghitungluas(){
    luas = (alas * tinggi) * 0.5;
}

void proseduroutput(){
    cout << "luas segitiga =" << luas << endl;
}

int main(){
prosedurinput();
prosedurmenghitungluas();
proseduroutput();   
}
