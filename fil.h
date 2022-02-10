#ifndef FIL_H
#define FIL_H

#include "tas.h"

class fil : public tas
{
public:
    fil(char renk);

    virtual void hareket_et(string pozisyon, map<string, tas*> tahta); // hareket edebilecegi kareleri ve tehdit ettigi taslari hesapla
};

#endif // FIL_H
