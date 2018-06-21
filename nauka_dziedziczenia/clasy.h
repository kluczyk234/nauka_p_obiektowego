#include <iostream>
#include <stdio.h>
#include <cstdlib> // potrzebna do cls
#include <conio.h> // potrzebna do korzystania z getchar
#include <iomanip> // potrzebna do setprecision
#include <math.h> // funkcje matematyczne
#include <windows.h>
using namespace std;

class Punkt
{
    float x,y;
    string nazwa;

public:
    void wyswietl();
    Punkt(string n="S", float a=0, float b=0) //konstruktor
    {
        nazwa = n;
        x=a;
        y=b;
    }
};

class Kolo :public Punkt
{
    float r;//promien kola
    string nazwa;//przysloniecie z klacy Punkt nazwy
public:
    void wyswietl();
    Kolo(string nazwakola="kolko", string nazwapunktu="Srodek kola: ", float a=0, float b=0, float promien=1)//konstruktor
        :Punkt(nazwapunktu,a,b)//lista inicjalizacyjna preambula
    {
        nazwa=nazwakola;
        r=promien;
    }
};

class Kula :public Kolo
{
    string nazwa;
    float r;
public:
    void wyswietl();
    Kula(string nazwakuli="kuleczka", string srodek="Srodek kluli :", float a=1, float b=1, float promienkuli=2)//konstruktor
        :Kolo(nazwakuli,srodek,a,b,promienkuli)//lista inicjalizacyjna preambula
    {
        nazwa=nazwakuli;
        r=promienkuli;
    }
};
