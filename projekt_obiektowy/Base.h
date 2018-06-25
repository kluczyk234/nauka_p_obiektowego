#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <conio.h>
#include <vector>
#include <list>
#pragma once
#include "Wczytanie.h"
using namespace std;

class Wirtualna :public Wczytanie
{
public:
    int wybor;
    virtual void wyswietl()=0;
    //czysta funkcja wirtualna
};
