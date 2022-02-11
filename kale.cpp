#include "kale.h"

#include <iostream>
using namespace std;

kale::kale(char renk) : tas(5, renk)
{

}

void kale::hareket_et(string pozisyon, map<string, tas *> tahta)
{
    std::map<string, tas*>::iterator it;

    string pos1 = sol(pozisyon);
    while(pos1 != "-"){         // tahtanin sonuna ulasana kadar sola git
        it = tahta.find(pos1);
        if(it != tahta.end()){  // karede tas var
            isTehdit(it->second);
            break;              // daha fazla sola gidemez
        }

        pos1 = sol(pos1);
    }

    string pos2 = sag(pozisyon);
    while(pos2 != "-"){
        it = tahta.find(pos2);
        if(it != tahta.end()){ // karede tas var
            isTehdit(it->second);
            break;
        }

        pos2 = sag(pos2);
    }

    string pos3 = ust(pozisyon);
    while(pos3 != "-"){
        it = tahta.find(pos3);
        if(it != tahta.end()){ // karede tas var
            isTehdit(it->second);
            break;
        }

        pos3 = ust(pos3);
    }

    string pos4 = alt(pozisyon);
    while(pos4 != "-"){
        it = tahta.find(pos4);
        if(it != tahta.end()){ // karede tas var
            isTehdit(it->second);
            break;
        }

        pos4 = alt(pos4);
    }
}
