#ifndef VEZIR_H
#define VEZIR_H

#include "tas.h"

class vezir : public tas
{
public:
    vezir(char renk);
    virtual void hareket_et(string pozisyon, map<string, tas*> tahta); // hareket edebilecegi kareleri ve tehdit ettigi taslari hesapla
};

#endif // VEZIR_H
