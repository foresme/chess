#include "tas.h"
#include "yardimcifonksiyonlar.h"

#include <iostream>
using namespace std;

tas::tas(char isim, int puan, char renk)
{
    this->isim = isim;
    this->renk = renk;
    this->puan = puan;
    this->anlik_puan = puan;
}

void tas::tehdit()
{
    setAnlik_puan(puan / 2.0);
}

double tas::getAnlik_puan() const
{
    return anlik_puan;
}

void tas::setAnlik_puan(double newAnlik_puan)
{
    this->anlik_puan = newAnlik_puan;
}

char tas::getRenk() const
{
    return renk;
}

bool tas::ayniTakim(char renk)
{
    return this->renk == renk;
}

void tas::isTehdit(tas *rakip)
{
    if(!ayniTakim(rakip->getRenk())){
        //cout << this->isim << " " << this->renk << " TEHDİT: " << rakip->isim << " " << rakip->renk << endl;
        rakip->tehdit();
    }
}

string tas::sol(string pozisyon)
{
    return yardimciFonksiyonlar().left(pozisyon);
}

string tas::sag(string pozisyon)
{
    return yardimciFonksiyonlar().right(pozisyon);
}

string tas::alt(string pozisyon)
{
    return yardimciFonksiyonlar().down(pozisyon);
}

string tas::ust(string pozisyon)
{
    return yardimciFonksiyonlar().up(pozisyon);
}


