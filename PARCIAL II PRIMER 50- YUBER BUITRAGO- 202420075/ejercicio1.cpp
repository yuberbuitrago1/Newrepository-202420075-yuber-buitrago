#include <iostream>

using namespace std;

int calculateTotal(int hours, int rate){

    int totalPrice;

    totalPrice= hours*rate;

    cout << totalPrice;

    return totalPrice;
}
void printInVoice(string plate, int hours, int rate){

    cout << "vehiculo de placa: " << plate  << endl << "horas: " << hours << endl << "tarifa de: " << rate << endl << "total a pagar: ";
    calculateTotal(hours, rate);

}

int main (){

    int hours, rate;
    string plate;

    cout << "ingrese placa del vehiculo: ";
    cin >> plate;
    cout << "ingrese las horas de parqueo: ";
    cin >> hours;
    cout << "ingrese tarifa del parqueadero: ";
    cin >> rate;

    printInVoice(plate, hours, rate);

    return 0;
}