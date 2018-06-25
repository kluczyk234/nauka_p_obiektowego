#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <conio.h>
#include <vector>
#include "kolejka.h"

using namespace std;

void wyswietl_kolejke(vector <float> &dane, int &glowa, int ile)
{
    system("CLS");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
    cout<<endl;
    cout<<"-------------------"<<endl;
    cout<<"ZAWARTOSC KOLEJKI: "<<endl;
    cout<<"-------------------"<<endl;
    if (ile==0)
    {
        cout<<"pusta";
    }
    else
    {
        int indeks;
        for (int i=0; i<ile; i++)
        {
            indeks=glowa+i;
            if (glowa+i>=5) indeks=glowa+i-5;
            cout<<dane[indeks]<<" ";
        }
    }
    cout<<endl<<"-------------------"<<endl<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

//------------------------------------------------------------------------

void push(vector <float> &dane, int &ogon, int &ile)
{
    if (ile>=5)
    {
        cout << "Kolejka pelna!";
        Sleep(1000);
    }
    else
    {
        cout<<endl<< "PUSH (jaka liczbe wstawic do kolejki): ";
        cin>>dane[ogon];
        ogon=(ogon+1)%5;
        ile=ile+1;
    }
}

//------------------------------------------------------------------------

void pop(vector <float> &dane, int &glowa, int &ile)
{
    if (ile==0)
    {
        cout<<"Kolejka jest pusta!";
        Sleep(1000);
    }
    else
    {
        cout<<endl<<"POP - nastapi usuniecie z kolejki liczby: "<<dane[glowa];
        glowa=(glowa+1)%5;
        ile=ile-1;
        Sleep(1000);
    }
}
//------------------------------------------------------------------------

void size_kolejka(int &ile)
{
    cout<<endl<<"Liczba elementow w kolejce: "<<ile;
    Sleep(1000);
}

//------------------------------------------------------------------------

void empty_kolejka(int &ile)
{

    if (ile==0) cout<<endl<<"EMPTY (kolejka pusta?) ->  TRUE";
    else cout<<endl<<"EMPTY (kolejka pusta?) ->  FALSE";
    Sleep(1000);
}

//------------------------------------------------------------------------
void Kolejka::wyswietl()
{
    cin.clear();
    cin.sync();
    system("CLS");
    Wczytanie wartosc_kolejka;
    vector<float>dane(5);
    ile=0;
    glowa=0;
    ogon=0;

    do
    {
        wyswietl_kolejke(dane, glowa, ile);
        //cout<<"glowa="<<glowa<<"   ogon="<<ogon<<"   ile="<<ile<<endl<<endl;
        cout << "MENU GLOWNE KOLEJKI:"<<endl;
        cout << "------------------------------------------"<<endl;
        cout << "1. PUSH (dodaje element na koniec kolejki) "<<endl;
        cout << "2. POP (usuwa element z poczatku kolejki) "<<endl;
        cout << "3. SIZE (ile elementow w kolejce) "<<endl;
        cout << "4. EMPTY (czy kolejka jest pusta?) "<<endl;
        cout << "5. Koniec programu "<<endl;
        cout << "------------------------------------------"<<endl;

        switch (wartosc_kolejka.wybor_wartosci())
        {
        case 1:
            push(dane, ogon, ile);
            wybor=666;
            break;

        case 2:
            pop(dane, glowa, ile);
            wybor=666;
            break;

        case 3:
            size_kolejka(ile);
            wybor=666;
            break;

        case 4:
            empty_kolejka(ile);
            wybor=666;
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
