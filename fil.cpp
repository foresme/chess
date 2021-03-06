#include "fil.h"

fil::fil(char renk) : tas(3, renk)
{

}

void fil::hareket_et(string pozisyon, map<string, tas *> tahta)
{
    std::map<string, tas*>::iterator it;

    string pos1 = sol(alt(pozisyon));
    while(pos1 != "-"){           // tahtanin sonuna ulasana kadar sol-alta git
        it = tahta.find(pos1);

        if(it != tahta.end()){    // karede tas var
            isTehdit(it->second); // tehdit durumu varsa karedeki tasin puanini yarila
            break;                // daha fazla sol-alta gidemez
        }

        pos1 = sol(alt(pos1));
    }

    string pos2 = sag(alt(pozisyon));
    while(pos2 != "-"){        // tahtanin sonuna ulasana kadar sag-alta git
        it = tahta.find(pos2);
        if(it != tahta.end()){ // karede tas var
            isTehdit(it->second);
            break;
        }

        pos2 = sag(alt(pos2));
    }

    string pos3 = sag(ust(pozisyon));
    while(pos3 != "-"){
        it = tahta.find(pos3);
        if(it != tahta.end()){ // karede tas var
            isTehdit(it->second);
            break;
        }

        pos3 = sag(ust(pos3));
    }

    string pos4 = sol(ust(pozisyon));
    while(pos4 != "-"){
        it = tahta.find(pos4);
        if(it != tahta.end()){ // karede tas var
            isTehdit(it->second);
            break;
        }

        pos4 = sol(ust(pos4));
    }
}
