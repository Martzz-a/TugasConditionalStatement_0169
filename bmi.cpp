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