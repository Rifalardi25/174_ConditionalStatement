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
    
void proseduroutput(){
    cout << "luas segitiga = " << hitungluas() << endl;
}

int main(){
prosedurinput();
proseduroutput();   
}
