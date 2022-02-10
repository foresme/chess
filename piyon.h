#ifndef PIYON_H
#define PIYON_H

#include "tas.h"

class piyon : public tas
{
public:
    piyon(char renk);

    virtual void hareket_et(string pozisyon, map<string, tas*> tahta); // hareket edebilecegi kareleri ve tehdit ettigi taslari hesapla
};

#endif // PIYON_H
