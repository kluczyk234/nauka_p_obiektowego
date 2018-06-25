#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <conio.h>
#include "Wczytanie.h"
using namespace std;
//snprintf
//bool sprawdzam (float x)
//{
//    int i=0;
//    while (x[i])
//  {
//    if (isalpha(x[i])==true)return false;
//    else return true;
//  }
//}

float Wczytanie::wczytanie_wartosci()
{
    float x=0;
 do
    {
        cout<<endl << "Podaj liczbe ktora chcesz wprowadzic: " ;
        cin >> x;
        if((cin.rdstate()==ios_base::failbit)&&(isdigit(x)!=true))
        {
            getchar();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
            cout<<endl<<"Podana wartosc nie jest liczba"<<endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            Sleep(1000);
            cin.clear();
            cin.sync();
            x= 1234;
        }
    }while(x==1234);
            cin.clear();
            cin.sync();

    return x;
}
int Wczytanie::wybor_wartosci()
{
        int x=0;
 do
    {
        cout<<endl << "Wybieram opcje: " ;
        cin >> x;
        if((cin.good()==false)||x==0)
        {
            if(cin.good()==false)
            {
                getchar();
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
                cout<<endl<<"Nie ma takiej opcji w menu"<<endl;
                x=987654321;
            }
            else if((x==0)&&(cin.good()==true))
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
                cout<<endl<<"Wybrales 0, nie ma takiej opcji w menu"<<endl;
                x=987654321;
                }
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            Sleep(1000);
            cin.clear();
            cin.sync();
        }
    }while(x==987654321);
            cin.clear();
            cin.sync();
return x;
}
