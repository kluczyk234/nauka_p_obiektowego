#include <iostream>
#include <stdio.h>
#include <cstdlib> // potrzebna do cls
#include <conio.h> // potrzebna do korzystania z getchar
#include <iomanip> // potrzebna do setprecision
#include <math.h> // funkcje matematyczne
#include <windows.h>
#include "Dzialania.h"

using namespace std;

Dzialania::Dzialania(float xx, float yy, float wyn)//kontruktor
{
    x=xx;
    y=yy;

    wynik=wyn;
}
void Dzialania::wczytaj_liczby()
{
    cout<<endl << "podaj liczbe 1: " ;
    cin >> x;
    if(!(x))
    {
        getchar();
        cout<<endl<<"podana wartosc nie jest liczba"<<endl;
        cout<< endl <<"Aby kontynuowac nacisnij enter "<<endl;
        getchar();
        getchar();
        x=false;
            system("cls");
            cin.clear();
            cin.sync();
    }
    cout<<endl << "podaj liczbe 2: " ;
    cin >> y;
    if(!(y))
    {
        getchar();
        cout<<endl<<"podana wartosc nie jest liczba"<<endl;
        cout<< endl <<"Aby kontynuowac nacisnij enter "<<endl;
        getchar();
        getchar();
        y=false;
    }
}

void Dzialania::dodawanie()
{
    wynik=x+y;
    cout<< "Suma= "<<wynik<<endl;
}

void Dzialania::odejmowanie()
{
    wynik=x-y;
    cout<< "Ronica= "<<wynik<<endl;
}
void Dzialania::mnozenie()
{
    wynik = x*y;
    cout<< "Iloczyn= "<<wynik<<endl;
}
void Dzialania::dzielenie()
{
    if (y==0) cout<<"nie dzielimy przez zero"<<endl;
    else
        wynik =  x/y;
    cout<< "Iloraz= "<<wynik<<endl;
}
void Dzialania::reszta_z_dzielenia()
{
    if(y==0)
    {
        cout<<"nie dzielimy przez zero"<<endl;
    }
    else
    {
        int y1=floor(y);
        int x1=floor(x);
        wynik=x1%y1;
        cout<< "Reszta z dzielenia liczby "<<x1 <<" przez liczbe "<<y1<<" = "<<wynik<<endl;
    }
}
void Dzialania::potegowanie()
{
    wynik = pow(x,y);
    cout<< "Liczba "<<x <<" podniesiona do potegi liczby "<<y<<" = "<<endl;
}
void Dzialania::logarytm()
{
    if ((x<=0)||(y<=0))
    {
        cout<<"Bledne dane";
        cout<< endl <<"Aby kontynuowac nacisnij enter "<<endl;
        getchar();
        getchar();
    }
    else
        wynik = log(x) / log(y);
    cout<<"Logarytm o podstawie "<<y<<" z liczby "<<x<<" wynosi "<< wynik <<endl;
}
Dzialania::~Dzialania()//destruktor
{
    cout<<"destruktor"<<endl;
}
