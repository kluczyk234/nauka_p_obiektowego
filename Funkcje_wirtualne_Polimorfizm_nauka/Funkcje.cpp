#include <iostream>
#include <stdio.h>
#include <cstdlib> // potrzebna do cls
#include <conio.h> // potrzebna do korzystania z getchar
#include <iomanip> // potrzebna do setprecision
#include <math.h> // funkcje matematyczne
#include <windows.h>
#include "Klasy.h"
using namespace std;

void Wczytywanie::wczytanie_wartosci()
{
    do
    {
        cout<<endl << "podaj liczbe: " ;
        cin >> wartosc;
        if(!(wartosc))
        {
            getchar();
            cout<<endl<<"Podana wartosc nie jest liczba"<<endl;
            cout<< endl <<"Aby kontynuowac nacisnij enter "<<endl;
            getchar();
            getchar();
            wartosc=false;
            //system("cls");
            cin.clear();
            cin.sync();
        }
    }
    while(wartosc==false);
}

void Kolo::oblicz_pole()
{
    cout<<"Pole kola "<<3.14*wartosc*wartosc<<endl;
}
void Kwadrat::oblicz_pole()
{
    cout<<"Pole kwadratu "<<wartosc*wartosc<<endl;
}
