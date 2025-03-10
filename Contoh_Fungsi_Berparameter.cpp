#include <iostream>
using namespace std;

double luas, alas, tinggi;

void prosedurinput(){
 cout << "Masukkan Nilai Alas : ";
 cin >> alas;

 cout << "Masukkan Nilai Tinggi : ";
 cin >> tinggi;
}

double hitungluas(){
    return 0.5 * alas * tinggi;
}

double hitungluas2 (double a, double t){
    return 0.5 * a * t;
}
    
void proseduroutput(){
    cout << "luas segitiga = " << hitungluas() << endl;
}

void proseduroutput2(){
    cout << "luas segitiga = " << hitungluas2(alas, tinggi) << endl;
}

int main(){
prosedurinput();
proseduroutput();
proseduroutput2();   
}
