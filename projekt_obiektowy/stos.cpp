#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <conio.h>
#include <vector>
#include "stos.h"

using namespace std;
float wczytanie_wartosci(float x)
{
 do
    {
        cout<<endl << "wybieram: " ;
        cin >> x;
        if(cin.good()==false)
        {
            getchar();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
            cout<<endl<<"Podana wartosc nie jest liczba"<<endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            cout<< endl <<"Aby kontynuowac nacisnij enter "<<endl;
            getchar();
            getchar();
            x=false;
            //system("cls");
            cin.clear();
            cin.sync();
        }
    }while(cin.good()==false);
            cin.clear();
            cin.sync();

    return x;
}
int wybor_wartosci(int x)
{
 do
    {
        cout<<endl << "wybieram: " ;
        cin >> x;
        if((cin.fail()==true)||x==0)
        {
            if(cin.fail()==true)
            {
                //getchar();
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
                cout<<endl<<"Nie ma takiej opcji"<<endl;
            }
            else if((x==0)&&(cin.good()==true))
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
                cout<<endl<<"Wybrales 0"<<endl;
            }
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            cout<< endl <<"Aby kontynuowac nacisnij enter "<<endl;
            getchar();
            getchar();
            //x=false;
            //system("cls");
            cin.clear();
            cin.sync();
        }
    }while(cin.fail()==true);
            cin.clear();
            cin.sync();

return x;
}
//------------------------------------------------------------------------
void wyswietl_stos(vector <float> &dane, int &rozmiar)
{
    system("CLS");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);

    cout<<endl;
    cout<<"----------------"<<endl;
    cout<<"ZAWARTOSC STOSU:"<<endl;
    cout<<"----------------"<<endl;
    if (rozmiar==0) cout<<"pusty"<<endl;
    else{
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
    if (rozmiar>=5)
    {
        cout << "Stos pelny!";
        Sleep(1000);
    }
    else
    {
        cout<<endl<< "PUSH (jaka liczbe polozyc na stosie): ";
        rozmiar=rozmiar+1;
        float y;
        dane.push_back(wczytanie_wartosci(y));
     }
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
    switch(wybor_wartosci(wybor))
    {
    case 1:
        push(dane, rozmiar);
        break;

    case 2:
        pop(dane, rozmiar);
        break;

    case 3:
        size(rozmiar);
        break;

        case 4:
            empty(rozmiar);
            break;
        case 5:
            wybor=false;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
            cout<<"Teraz nastapi powrot do MENU GLOWNEGO"<<endl;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            cout<< endl <<"Aby kontynuowac nacisnij enter "<<endl;
            getchar();
            getchar();
            //exit(0);                        // powoduje wyjscie z programu jesli wybierzemy opcje 5
            break;
        default:                            // scenariusz dla wszystkich innych niezdefiniowanych woborów w case (dzieki temu ze wubur jest zmienna typu char jak ktos sie pomyli program korzysta z opcji default
            cout<< "Nie ma takiej opcji w menu";
            Sleep(2000);
        }
    } while (wybor != false);
}

