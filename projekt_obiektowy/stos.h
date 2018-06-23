#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <conio.h>
#include <vector>
#include "Base.h"

using namespace std;

class Stos :public Wirtualna
{
public:
    int rozmiar;
    vector<float>dane;
    virtual void wyswietl();
    float wczytanie_wartosci();
    int wybor_wartosci();
};
