#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <conio.h>
#include <vector>
//#include "lista.h"
#include "stos.h"
//#include "kolejka.h"
//#include "drzewo_binarne.h"

using namespace std;

void obliczenia(Wirtualna *x)
{
    x -> wyswietl();
}

int wybor_typu_struktury(int wyb)
{
 do
 {
  cout<<endl << "wybieram: " ;
         cin >> wyb;
        if(!(wyb))
        {
            getchar();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
            cout<<endl<<"Nie ma takiej opcji"<<endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            cout<< endl <<"Aby kontynuowac nacisnij enter "<<endl;
            getchar();
            getchar();
            wyb=false;
            //system("cls");
            cin.clear();
            cin.sync();
        }
}while(wyb==false);
return wyb;
}

int main()
{
    Stos obiekt1;
//    Lista obiekt2;
//    Kolejka obiekt3;
//    Drzewo obiekt4;

//    obiekt.wyswietl();
    Wirtualna *wskaznik;

        int wybor_decyzja;
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
    switch(wybor_typu_struktury(wybor_decyzja))
    {
    case 1:
    wskaznik = &obiekt1;
        break;

    case 2:
    wskaznik = &obiekt1;
        break;

    case 3:
    wskaznik = &obiekt1;
        break;

        case 4:
    wskaznik = &obiekt1;
            break;
        case 5:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
            cout<<"Teraz nastapi wyjscie z programu"<<endl;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            cout<< endl <<"Aby kontynuowac nacisnij enter "<<endl;
            getchar();
            wybor_decyzja=false;
            exit(0);                        // powoduje wyjscie z programu jesli wybierzemy opcje 5
            break;
        default:                            // scenariusz dla wszystkich innych niezdefiniowanych woborów w case
            cout<< " Nie ma takiej opcji w menu";
            Sleep(1000);
        }
             obliczenia(wskaznik);
    } while (wybor_decyzja != false);
    return 0;
}
