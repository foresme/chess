#ifndef AT_H
#define AT_H

#include "tas.h"

class at : public tas
{
public:
    at(char renk);

    virtual void hareket_et(string pozisyon, map<string, tas*> tahta); // hareket edebilecegi kareleri ve tehdit ettigi taslari hesapla
};

#endif // AT_H
