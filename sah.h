#ifndef SAH_H
#define SAH_H

#include "tas.h"

class sah : public tas
{
public:
    sah(char renk);
    virtual void hareket_et(string pozisyon, map<string, tas*> tahta); // hareket edebilecegi kareleri ve tehdit ettigi taslari hesapla
};

#endif // SAH_H
