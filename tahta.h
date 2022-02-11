#ifndef TAHTA_H
#define TAHTA_H

#include <map>
#include "tas.h"

#include <iostream>
using namespace std;

class tahta
{
public:
    tahta(string *positions); // dosyadan okunan pozisyonlarla satranc tahtasını olustur
    void puanHesabi(); // oyun sonunda toplam puan hesabı
    void oyna(); // hangi taslar tehdit altında hesapla

private:
    // oyundaki tum taslari pozisyonları ile beraber tutmak icin
    map<string, tas*> taslar; // a8 -> piyon, d3 -> kale gibi
    void tasEkle(string pozisyon, tas *yeniTas); // taslar map'ine pozisyonu ve tasi ekle
};

#endif // TAHTA_H
