#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <conio.h>
#include <vector>
#include "stos.h"

using namespace std;

void wyswietl_stos(vector <float> &dane, int &rozmiar)
{
    system("CLS");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);

    cout<<endl;
    cout<<"----------------"<<endl;
    cout<<"ZAWARTOSC STOSU:"<<endl;
    cout<<"----------------"<<endl;
    if (rozmiar==0) cout<<"pusty"<<endl;
    else
    {
        for (int i=rozmiar; i>=1; i--)
        {
            cout <<dane[i]<<endl;
        }
    }
    cout << "----------------"<<endl<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}
//------------------------------------------------------------------------

void push(vector <float> &dane, int &rozmiar)
{
    float z=0;
    do
        {
    Wczytanie wartosc;

    if (rozmiar>=5)
    {
        cout << "Stos pelny!";
        Sleep(1000);
    }
    else if (rozmiar<=5)
    {
        cout<<endl<< "PUSH (jaka liczbe polozyc na stosie): ";
        rozmiar=rozmiar+1;
        z=wartosc.wczytanie_wartosci();
        dane.push_back(z);
    }
    }while(z==1234);
    cin.clear();
    cin.sync();
        system("CLS");
}

//------------------------------------------------------------------------

void pop(vector <float> &dane, int &rozmiar)
{
    if (rozmiar>=1)
    {
        cout<<endl<<"POP - nastapi usuniecie ze stosu liczby: "<<dane[rozmiar];
        Sleep(2000);
        dane.pop_back();
        rozmiar=rozmiar-1;
    }
    else
    {
        cout << "Stos pusty!";
        Sleep(1000);
    }
}
//------------------------------------------------------------------------

void size(int &rozmiar)
{
    cout<<endl<<"Liczba elementow na stosie: "<<rozmiar;
    Sleep(2000);
}

//------------------------------------------------------------------------

void empty(int &rozmiar)
{

    if (rozmiar==0) cout<<endl<<"EMPTY (stos pusty?) ->  TRUE";
    else cout<<endl<<"EMPTY (stos pusty?) ->  FALSE";
    Sleep(2000);
}

//------------------------------------------------------------------------

void Stos::wyswietl()
{
    cin.clear();
    cin.sync();
    system("CLS");
    Wczytanie wartosc_stos;
    rozmiar=0;
    vector<float>dane(1);
    do
    {
        wyswietl_stos(dane, rozmiar);
        cout << "MENU STOSU:"<<endl;
        cout << "------------------------------------------"<<endl;
        cout << "1. PUSH (dodaje element na szczyt stosu) "<<endl;
        cout << "2. POP (usuwa element ze szczytu stosu) "<<endl;
        cout << "3. SIZE (ile elementow na stosie) "<<endl;
        cout << "4. EMPTY (czy stos jest pusty?) "<<endl;
        cout << "5. Koniec programu "<<endl;
        cout << "------------------------------------------"<<endl;
        switch(wartosc_stos.wybor_wartosci())
        {
        case 1:
            push(dane, rozmiar);
            wybor=99;
            break;

        case 2:
            pop(dane, rozmiar);
            wybor=99;
            break;

        case 3:
            size(rozmiar);
            wybor=99;
            break;

        case 4:
            empty(rozmiar);
            wybor=99;
            break;
        case 5:
            wybor=0;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
            cout<<"Teraz nastapi powrot do MENU GLOWNEGO"<<endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            cout<< endl <<"Aby kontynuowac nacisnij enter "<<endl;
            getchar();
            cin.clear();
            cin.sync();
            break;
        default:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
            cout<< "Nie ma takiej opcji w menu";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            Sleep(1000);
            wybor=99;
        }
    }
    while (wybor != 0);
    cin.clear();
    cin.sync();
    system("CLS");
}

