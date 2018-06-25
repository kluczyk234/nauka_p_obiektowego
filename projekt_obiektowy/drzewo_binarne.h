#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <conio.h>
#include <vector>
#include "Base.h"

using namespace std;

class Drzewo_binarne :public Wirtualna
{
public:
    float *korzen;
    int rozmiar;
    vector<bool>pusty;
    int wezel;
    float liczba;
    vector<float>dane;
    virtual void wyswietl();
    float wczytanie_wartosci();
    int wybor_wartosci();
};
