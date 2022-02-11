#include "sah.h"

sah::sah(char renk) : tas(100, renk)
{

}

void sah::hareket_et(string pozisyon, map<string, tas *> tahta)
{
    std::map<string, tas*>::iterator it;

    string positions[8];
    positions[0] = ust(pozisyon); // 1 üst
    positions[1] = alt(pozisyon); // 1 alt
    positions[2] = sag(pozisyon); // 1 sag
    positions[3] = sol(pozisyon); // 1 sol
    positions[4] = ust(sag(pozisyon)); // 1 üst 1 sag
    positions[5] = ust(sol(pozisyon)); // 1 üst 1 sol
    positions[6] = alt(sag(pozisyon)); // 1 alt 1 sag
    positions[7] = alt(sol(pozisyon)); // 1 alt 1 sol

    for(int k = 0; k < 8; k++){

        it = tahta.find(positions[k]); // karede var olan bir tas var mi?

        if(it != tahta.end()){    // karede tas var
            isTehdit(it->second); // tehdit durumu varsa karedeki tasin puanini yarila
        }
    }

}
