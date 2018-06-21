#include <iostream>
#include <stdio.h>
#include <cstdlib> // potrzebna do cls
#include <conio.h> // potrzebna do korzystania z getchar
#include <iomanip> // potrzebna do setprecision
#include <math.h> // funkcje matematyczne
#include <windows.h>
#include "Dzialania.h"

using namespace std;
char wybor_dzialania()
{
    do{
    char wybor;
    wybor=getch();
    if(!(wybor))
    {
        getchar();
        cout<< "Nie ma takiej opcji w menu"<<endl;
        cout<< endl <<"Aby kontynuowac nacisnij enter "<<endl;
        getchar();
        system("cls");
        cin.clear();
        wybor=false;
    }
    else
    {
        cout<< endl << "Wybrales opcje nr "<<wybor <<endl;
        return wybor;
    }
    }while(false);
}
void wykonawca(Dzialania &dz1)
{    char numerek;
    numerek=wybor_dzialania();
    if (numerek=='1')
    {
        dz1.wczytaj_liczby();
        dz1.dodawanie();

    }
    else if (numerek=='2')
    {
        dz1.wczytaj_liczby();
        dz1.odejmowanie();

    }
    else if (numerek=='3')
    {
        dz1.wczytaj_liczby();
        dz1.mnozenie();

    }
    else if (numerek=='4')
    {
        dz1.wczytaj_liczby();
        dz1.dzielenie();

    }
    else if (numerek=='5')
    {
        dz1.wczytaj_liczby();
        dz1.reszta_z_dzielenia();
    }
    else if (numerek=='6')
    {
        dz1.wczytaj_liczby();
        dz1.potegowanie();
    }
    else if (numerek=='7')
    {
        dz1.wczytaj_liczby();
        dz1.logarytm();
    }
    else if (numerek=='8')
    {
        cout<< endl <<"Aby kontynuowac nacisnij enter "<<endl;
        getchar();
        exit(0);
        system("cls");
        cin.clear();
        cin.sync();
             }
}
bool pytacz()
{
    char odpowiedz;
    cout<< endl << "Czy chcesz kontynuowac?" << endl;
    cout<< endl << "Wcisnij Y jesli tak, wcisnij N jesni nie";
    do                {
        odpowiedz=getch();
        cout<< endl << "Wybrales opcje "<<odpowiedz <<endl;
        cout<< endl <<"Aby kontynuowac nacisnij enter "<<endl;
        getchar();

        if ((odpowiedz=='Y')||(odpowiedz=='y'))
        {
            system("cls");
            cin.clear();
            cin.sync();
            return false;
        }
        if ((odpowiedz=='N')||(odpowiedz=='n')) exit(0);
        else
        {
            cout<< "Nie ma takiej opcji w menu"<<endl;
            system("cls");
            cin.clear();
            cin.sync();
            return 1;
        }
    }
    while(1);
}

int main()
{
    do {
        cout << "WITAJ W KALKULATORZE!!" << endl;
    cout<< endl;
    cout<< "MENU GLOWNE"<< endl;
    cout<<"---------------"<<endl;
    cout<<" 1. Dodawanie" <<endl;
    cout<<" 2. Odejmowanie" <<endl;
    cout<<" 3. Mnozenie" <<endl;
    cout<<" 4. Dzielenie" <<endl;
    cout<<" 5. Reszta z dzielenia" <<endl;
    cout<<" 6. Potegowanie" <<endl;
    cout<<" 7. Logarytm" <<endl;
    cout<<" 8. Wyjscie z programu" <<endl;
    cout<< endl << "Wybierz nr dzialania z menu " <<endl;
        Dzialania dz1;
        wykonawca(dz1);
        pytacz();
 }
 while(true);

    return 0;
}
