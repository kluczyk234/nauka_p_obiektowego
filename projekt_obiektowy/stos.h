#include <iostream>
#include <cstdlib>
#include <math.h>
#include <vector>
#include <windows.h>

using namespace std;

class Wirtualna
{
public:
    virtual void wyswietl()=0;
    //czysta funkcja wirtualna
};
class Stos :public Wirtualna
{
    public:
        int liczba;
    int rozmiar;
        int wybor;
    vector<float>dane;
    virtual void wyswietl();
};
