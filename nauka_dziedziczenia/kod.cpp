#include <iostream>
#include <stdio.h>
#include <cstdlib> // potrzebna do cls
#include <conio.h> // potrzebna do korzystania z getchar
#include <iomanip> // potrzebna do setprecision
#include <math.h> // funkcje matematyczne
#include <windows.h>
#include "clasy.h"
using namespace std;


void Punkt::wyswietl()
{
    cout <<nazwa<< "(" <<x<<", "<<y<<")"<<endl;
}
void Kolo::wyswietl()
{
    cout<<"Kolo o nazwie: "<<nazwa<<endl;
    Punkt::wyswietl();//tutaj bedzie wywolanie funkcji z klasy Punkt
    cout<<"Promien: "<<r<<endl;
    cout<<"Pole kola: "<<M_PI*r*r<<endl;
}
void Kula::wyswietl()
{

    cout<<endl<<"Kula o nazwie: "<<nazwa<<endl;
    Punkt::wyswietl();
    cout<<"Promien kuli: "<< r<<endl;
    cout<<"Objetosc kuli: "<< (4/3)*M_PI*r*r*r<<endl;
}
