#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <conio.h>
#include <vector>
#include "Base.h"

using namespace std;

class Kolejka :public Wirtualna
{
public:
    int ile;
    int glowa;
    int ogon;
    vector<float>dane;
    virtual void wyswietl();
    float wczytanie_wartosci();
    int wybor_wartosci();
};
