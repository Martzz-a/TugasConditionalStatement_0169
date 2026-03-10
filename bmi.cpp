#include <iostream>
using namespace std;

float rumus_BMI (float a, float b){
    return a/(b*b);
}

string status_BMI (float r){
    if (r < 18.5)
        return "Berat Badan Kurang";
    else if (r < 25)
        return "Berat Badan Normal";
    else if (r < 30)
        return "Berat Badan Kelebihan";
    else
        return "Berat Badan Obesitas";
}

int main (){
    float bb, tb, BMI;
    string status;

    cout << "--- Selamat Datang Kelas A 2025 ---" << endl;

    cout << "Masukkan berat badan (kilogram) : ";
    cin >> bb;

    cout << "Masukkan tinggi badan (meter)   : ";
    cin >> tb;

    BMI = rumus_BMI(bb,tb);
}