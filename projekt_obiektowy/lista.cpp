#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <conio.h>
#include <list>
#include "lista.h"
using namespace std;


void wyswietl_liste(list<float>&lista)
{
    system("CLS");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
    cout<<" ZAWARTOSC LISTY: "<<endl;
    cout<<"---------------------------"<<endl;

    for(list<float>::iterator i=lista.begin(); i!= lista.end(); ++i)
        cout<<*i<<" ";

    cout<<endl;
    cout<<"---------------------------"<<endl<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

//-------- 1 ------------

void push_front(list<float>&lista)
{
    float z=0;
    do
    {
        Wczytanie wartosc;
        cout<<"Podaj jaka liczbe wstawic na poczatek listy: ";
        z=wartosc.wczytanie_wartosci();
        lista.push_front(z);
    }
    while(z==1234);
    cin.clear();
    cin.sync();
    system("CLS");
}

//--------- 2 -----------

void push_back(list<float>&lista)
{
    float z=0;
    do
    {
        Wczytanie wartosc;
    cout<<"Podaj jaka liczbe wstawic na koniec listy: ";
        z=wartosc.wczytanie_wartosci();
    lista.push_back(z);
    }
    while(z==1234);
    cin.clear();
    cin.sync();
    system("CLS");
}

//---------- 3 ---------

void pop_front(list<float>&lista)
{
    cout<<"Nastapi usuniecie liczby z poczatku listy";
    Sleep(2000);
    lista.pop_front();
}

//---------- 4 ---------

void pop_back(list<float>&lista)
{
    cout<<"Nastapi usuniecie liczby z konca listy";
    Sleep(2000);
    lista.pop_back();
}

//---------- 5 ----------

void size(list<float>&lista)
{
    cout<<"Liczby na liscie: "<<lista.size();
    Sleep(2000);
}

//---------- 6 ----------

void max_size(list<float>&lista)
{
    cout<<"Max liczb na liscie: "<<lista.max_size();
    Sleep(5000);
}

//---------- 7 ----------

void empty(list<float>&lista)
{
    cout<<"Czy lista pusta? -> ";
    if (lista.empty()==1) cout<<"TRUE";
    else cout<<"FALSE";
    Sleep(2000);
}

//---------- 8 ----------

void remove(list<float>&lista)
{
    float z=0;
    do
    {
        Wczytanie wartosc;
    cout<<"Usun z listy wszystkie liczby rowne: ";
        z=wartosc.wczytanie_wartosci();
    lista.remove(z);
    }
    while(z==1234);
    cin.clear();
    cin.sync();
    system("CLS");
}

//---------- 9 ----------

void sort(list<float>&lista)
{
    cout<<"Nastapi posortowanie listy! ";
    lista.sort();
    Sleep(2000);
}

//---------- 10 ----------

void reverse(list<float>&lista)
{
    cout<<"Nastapi odwrocenie kolejnosci liczb!";
    lista.reverse();
    Sleep(2000);
}

void Lista::wyswietl()
{
    cin.clear();
    cin.sync();
    system("CLS");
    Wczytanie wartosc_lista;
    list<float>lista;

    do
    {

        wyswietl_liste(lista);

        cout << " MENU GLOWNE LISTY:"<<endl;
        cout << "---------------------------"<<endl;
        cout << "1.  push_front"<<endl;
        cout << "2.  push_back"<<endl;
        cout << "3.  pop_front"<<endl;
        cout << "4.  pop_back"<<endl;
        cout << "5.  size"<<endl;
        cout << "6.  max_size"<<endl;
        cout << "7.  empty"<<endl;
        cout << "8.  remove"<<endl;
        cout << "9.  sort"<<endl;
        cout << "10. reverse"<<endl;
        cout << "11. exit"<<endl;
        cout << "---------------------------"<<endl;

        switch (wartosc_lista.wybor_wartosci())
        {
        case 1:
            push_front(lista);
            wybor=999;
            break;
        case 2:
            push_back(lista);
            wybor=999;
            break;
        case 3:
            pop_front(lista);
            wybor=999;
            break;
        case 4:
            pop_back(lista);
            wybor=999;
            break;
        case 5:
            size(lista);
            wybor=999;
            break;
        case 6:
            max_size(lista);
            wybor=999;
            break;
        case 7:
            empty(lista);
            wybor=999;
            break;
        case 8:
            remove(lista);
            wybor=999;
            break;
        case 9:
            sort(lista);
            wybor=999;
            break;
        case 10:
            reverse(lista);
            wybor=999;
            break;
        case 11:
            wybor=11;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
            cout<<"Teraz nastapi powrot do MENU GLOWNEGO"<<endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            cout<< endl <<"Aby kontynuowac nacisnij enter "<<endl;
            cin.clear();
            cin.sync();
            getchar();
            break;
        default:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
            cout<< "Nie ma takiej opcji w menu";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            Sleep(1000);
            wybor=999;
            break;
        }
    }
    while(wybor != 11);
    cin.clear();
    cin.sync();
    system("CLS");
}
