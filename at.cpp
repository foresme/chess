#include "at.h"
#include <iostream>
using namespace std;

at::at(char renk) : tas(3, renk)
{

}

void at::hareket_et(string pozisyon, map<string, tas *> tahta)
{
    string positions[8];
    positions[0] = sol(sol(ust(pozisyon))); // 2 sol 1 üst
    positions[1] = sol(sol(alt(pozisyon))); // 2 sol 1 alt
    positions[2] = sag(sag(ust(pozisyon))); // 2 sag 1 üst
    positions[3] = sag(sag(alt(pozisyon))); // 2 sag 1 alt
    positions[4] = ust(ust(sag(pozisyon))); // 2 üst 1 sag
    positions[5] = ust(ust(sol(pozisyon))); // 2 üst 1 sol
    positions[6] = alt(alt(sag(pozisyon))); // 2 alt 1 sag
    positions[7] = alt(alt(sol(pozisyon))); // 2 alt 1 sol

    std::map<string, tas*>::iterator it;
    for(int k = 0; k < 8; k++){

        it = tahta.find(positions[k]); // karede var olan bir tas var mi?

        if(it != tahta.end()){    // karede tas var
            isTehdit(it->second); // tehdit durumu varsa karedeki tasin puanini yarila
        }
    }
}
