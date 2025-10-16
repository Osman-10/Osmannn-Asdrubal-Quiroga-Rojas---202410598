// ing. me toco subirlo aca despues de tiempo como habiamos acoradado!!!!


#include <iostream>
using namespace std;

bool esPositi(char radio) {
    if (radio == '-') {
        return true;
    } else {
        return false;
    }
}
bool esNegati(char radio) {
    if (radio == '.') {
        return true;
    } else {
        return false;
    }
}

void validSignals(string senales) {
    int positivas = 0;
    int negativas = 0;

    for (int i = 0; i < senales.size(); i++) 
    {
        if (esPositi(senales[i])) {
            positivas++;
        } 
        else if (esNegati(senales[i])) {
            negativas++;
        }
    }

     cout << "Senales positivas (-): " << positivas << endl;
    cout << "Senales negativas (.): " << negativas << endl;
}

int main() {
    string signals;
    cout << "Ingrese  senales (- o .): ";
    cin >> signals;
    validSignals(signals);

    return 0;
}

