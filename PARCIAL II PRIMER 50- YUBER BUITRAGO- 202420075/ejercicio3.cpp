#include <iostream>

using namespace std;

bool isValidAmount(int amount){

    if (amount%50 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int dispenseBills(int amount){

    if ( isValidAmount(amount) == true)
    {
        int i=amount;

        while (i>0)
        {
            cout << "saldo:" << i << "-50: " << i-50 << endl;
            i= i-50;

            
        }
    }
    else 
    {
        cout << "monto no valido debe ser multiplo de 50";
    }
    return 0;
}

int main(){

    int amount;

    cout << "ingrese el monto a retirar:";
    cin >> amount;

    dispenseBills(amount);

    return 0;
}