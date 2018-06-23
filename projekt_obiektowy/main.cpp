#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <conio.h>
#include <vector>
#include <list>
#include "lista.h"
#include "stos.h"
#include "Base.h"
#include "kolejka.h"
//#include "drzewo_binarne.h"

using namespace std;

void obliczenia(Wirtualna *x)
{
    x -> wyswietl();
}

int main()
{
    Wczytanie wartosc_p;

    Stos obiekt1;
    Lista obiekt2;
    Kolejka obiekt3;
//    Drzewo obiekt4;

//    obiekt.wyswietl();
    Wirtualna *wskaznik;

    int wybor_p=0;
    do
    {
        system("CLS");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
        cout << "MENU GLOWNE:"<<endl;
        cout << "------------------------------------------"<<endl;
        cout << "1. Pokaz mozliwosci STOSU "<<endl;
        cout << "2. Pokaz mozliwosci LISTY "<<endl;
        cout << "3. Pokaz mozliwosci KOLEJKI "<<endl;
        cout << "4. Pokaz mozliwosci DRZEWA BINARNEGO "<<endl;
        cout << "5. Koniec programu "<<endl;
        cout << "------------------------------------------"<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
        switch(wartosc_p.wybor_wartosci())
        {
        case 1:
            wskaznik = &obiekt1;
            obliczenia(wskaznik);
            break;

        case 2:
            wskaznik = &obiekt2;
            obliczenia(wskaznik);
            break;

        case 3:
            wskaznik = &obiekt3;
            obliczenia(wskaznik);
            break;

        case 4:
            wskaznik = &obiekt1;
            obliczenia(wskaznik);
            break;
        case 5:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
            cout<<"Teraz nastapi wyjscie z programu"<<endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            cout<< endl <<"Aby kontynuowac nacisnij enter "<<endl;
            getchar();
            wybor_p=5;
            break;
        default:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
            cout<< "Nie ma takiej opcji w menu";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            Sleep(1000);
            break;
        }
}    while (wybor_p != 5);
    return 0;
}
