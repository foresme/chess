#ifndef KALE_H
#define KALE_H

#include "tas.h"

class kale : public tas
{
public:
    kale(char renk);

    virtual void hareket_et(string pozisyon, map<string, tas*> tahta); // hareket edebilecegi kareleri ve tehdit ettigi taslari hesapla
};

#endif // KALE_H
