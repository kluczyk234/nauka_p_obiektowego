#include <iostream>
#include <stdio.h>
#include <cstdlib> // potrzebna do cls
#include <conio.h> // potrzebna do korzystania z getchar
#include <iomanip> // potrzebna do setprecision
#include <math.h> // funkcje matematyczne
#include <windows.h>
#include "Klasy.h"
using namespace std;
void obliczenia(Ksztalt *wskaznik)
{
    wskaznik -> wczytanie_wartosci();
    wskaznik -> oblicz_pole();
}

int main()
{
 Kolo K;
 Kwadrat KW;
 Ksztalt *wsk;
 cout<<"Program obliczy pole kola"<<endl;
 wsk = &K;
 //wsk ->oblicz_pole();
 obliczenia(wsk);
 cout<<"Program obliczy pole kwadratu"<<endl;
 wsk = &KW;
 //wsk ->oblicz_pole();
 obliczenia(wsk);
    return 0;
}
