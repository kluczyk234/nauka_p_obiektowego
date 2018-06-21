#include <iostream>
#include <cstdlib>
#include <math.h>
#include <windows.h>
using namespace std;
class Kolejka :public Wirtualna
{
    int *dane;
//    dane = new int [6];
    int rozmiar;
    int wybor;
    int ile;
    int glowa;
    int ogon;
public:
    Koljka(int roz=0, int wy=1, int il, int glo, int ogo)
    {
        rozmiar=roz;
        wybor=wy;
        ile=il;
        glowa=glo;
        ogon=ogo;
    }
    virtual void wyswietl();
 //   delete [] dane;
//    return 0;
};
