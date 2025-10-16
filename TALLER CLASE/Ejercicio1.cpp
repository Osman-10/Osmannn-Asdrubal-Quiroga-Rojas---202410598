#include <iostream>
using namespace std;

bool sizeeMin( string pasword)
{
    if (pasword.size() < 8)
    {
        return false;

    }
    return true;
}
bool charSpecials(string pasword)
{
    int especiales = 0;
    for (int i = 0; i < pasword.size(); i++)
    {
        if ((pasword[i] >= 33 && pasword[i] <= 47) )
        {
            especiales++;
            return true;
        }
    }
    return false;

}
bool hasMIn(string pasword)
{
    int minusculas = 0;
    for (int i = 0; i < pasword.size(); i++)
    {
        if (  pasword[i]>= 97 &&  pasword[i] <= 122)
        {
            minusculas++;
            return true;
        }
    }
    return false;
    

}
bool hasMay( string pasword)
{
    int mayusculas = 0;
    for (int i = 0; i < pasword.size(); i++)
    {
        if (  pasword[i]>= 65 &&  pasword[i] <= 90)
        {
            mayusculas++;
            return true;
        }
    }
    return false;


}
void validPasw() {
    string pasword;
    cout << "Ingrese una contrasena (sin espacios): ";
    cin >> pasword;
    if (sizeeMin(pasword) && charSpecials( pasword) && hasMIn( pasword) && hasMay( pasword))
    {
        cout << " contrasena valida." << endl;
    }
    
    else
    {
        cout << " Contraseña valida." << endl;
    }

}
int main (){
    validPasw();
    return 0;
}
