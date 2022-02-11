#include "piyon.h"

#include <iostream>
using namespace std;

piyon::piyon(char renk) : tas(1, renk)
{
}

void piyon::hareket_et(string pozisyon, map<string, tas*> tahta)
{
    std::map<string, tas*>::iterator it;
    string pos1;
    string pos2;

    if(getRenk() == 's') { // siyahsa tahtada aşağı doğru hareket edebilir
        pos1 = sol(alt(pozisyon));
        pos2 = sag(alt(pozisyon));

    } else { // beyazsa tahtada yukarı
        pos1 = sol(ust(pozisyon));
        pos2 = sag(ust(pozisyon));
    }

    it = tahta.find(pos1);
    if(it != tahta.end()){      // karede tas var
        isTehdit(it->second);   // tehdit durumu varsa puani yarila
    }

    it = tahta.find(pos2);
    if(it != tahta.end()){ // karede tas var
        isTehdit(it->second);
    }

}



