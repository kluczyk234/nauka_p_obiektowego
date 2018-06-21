#include <iostream>
#include <stdio.h>
#include <cstdlib> // potrzebna do cls
#include <conio.h> // potrzebna do korzystania z getchar
#include <iomanip> // potrzebna do setprecision
#include <math.h> // funkcje matematyczne
#include <windows.h>

using namespace std;
class Wczytywanie
{
    public:
float wartosc;
    Wczytywanie(float x=0)
    {
        wartosc=x;
    }
    void wczytanie_wartosci();
};
class Ksztalt :public Wczytywanie
{
public:
    virtual void oblicz_pole()=0;
    //czysta funkcja virtualna
};

class Kolo :public Ksztalt
{
public:
    Kolo(float x=0)
    {
        wartosc=x;
    }
    virtual void oblicz_pole();
  };
class Kwadrat :public Ksztalt
{
public:
    Kwadrat(float x=0)
    {
        wartosc=x;
    }
    virtual void oblicz_pole();
};
