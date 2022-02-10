#include "sah.h"

sah::sah(char renk) : tas('s', 100, renk)
{

}

void sah::hareket_et(string pozisyon, map<string, tas *> tahta)
{
    std::map<string, tas*>::iterator it;

    string pos1 = sol(pozisyon);
    string pos2 = sag(pozisyon);
    string pos3 = ust(pozisyon);
    string pos4 = alt(pozisyon);

    it = tahta.find(pos1);
    if(it != tahta.end()){ // karede tas var
        isTehdit(it->second);
    }

    it = tahta.find(pos2);
    if(it != tahta.end()){ // karede tas var
        isTehdit(it->second);
    }

    it = tahta.find(pos3);
    if(it != tahta.end()){ // karede tas var
        isTehdit(it->second);
    }

    it = tahta.find(pos4);
    if(it != tahta.end()){ // karede tas var
        isTehdit(it->second);
    }

}
