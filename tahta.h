#ifndef TAHTA_H
#define TAHTA_H

#include <map>
#include "piyon.h"
#include "at.h"
#include "fil.h"
#include "kale.h"
#include "sah.h"
#include "vezir.h"

class tahta
{
public:
    tahta();
    void tasEkle(string pozisyon, tas *yeniTas);
    double puanHesabi();
    void oyna();

private:
    map<string, tas*> taslar; // a8 -> piyon, d3 -> kale gibi
};

#endif // TAHTA_H
