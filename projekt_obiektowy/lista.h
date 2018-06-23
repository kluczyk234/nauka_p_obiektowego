#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <conio.h>
#include <list>
#include "Base.h"

using namespace std;

class Lista :public Wirtualna
{
public:

    list<float>lista;
    virtual void wyswietl();
    float wczytanie_wartosci();
    int wybor_wartosci();
};
