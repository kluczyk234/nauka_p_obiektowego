#include <iostream>
#include <stdio.h>
#include <cstdlib> // potrzebna do cls
#include <conio.h> // potrzebna do korzystania z getchar
#include <iomanip> // potrzebna do setprecision
#include <math.h> // funkcje matematyczne
#include <windows.h>

using namespace std;

class Dzialania
{
    float x, y, wynik;

    public:
    Dzialania(float=0, float=1, float=0); //konstruktor
    void wczytaj_liczby();
    void dodawanie();
    void odejmowanie();
    void mnozenie();
    void dzielenie();
    void reszta_z_dzielenia();
    void potegowanie();
    void logarytm();
    friend void wykonawca(Dzialania &dz1);

~Dzialania();//destruktor
};

