#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    double r;
    double v;
    double t;
    double tt;
    cout << "Hello world! V.1.0 ()seba0456" << endl;
    cout << "Witaj w kalkulatorze okresu obiegu staelit!" << endl;
    cout << "Oto krotka instrukcja." << endl;
    cout << "1.Prosze by wartosc 'r' byla podawana w kilometrach" << endl;
    cout << "2.Prosze by wartosc 'V' byla podawana w km/h" << endl;
    cout << "Dzieki tym zabiegom nie muszisz podawac jednostek" << endl;
    cout << "Zaczynamy!" << endl;
    cout << "Podaj wartosc r" << endl;
    cin >> r;
    cout << "Podaj watosc V" << endl;
    cin >> v;
    t = (6.28 * r);
    tt = t / v;
    cout << "Dane:" << endl;
    cout << "V= " << v << endl;
    cout << "r= " << r << endl;
    cout << "Wzor to (2liczba pi*r):V" << endl;
    cout << "T= " << tt << "H" << endl;
    cout << "Dziekuje za uzycie narzedzia" << endl;
    cout << "seba0456" << endl;
    cin.sync();
    cin.get();
    return 0;

}

