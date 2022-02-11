#include "vezir.h"

vezir::vezir(char renk) : tas(9, renk)
{

}

void vezir::hareket_et(string pozisyon, map<string, tas *> tahta)
{
    std::map<string, tas*>::iterator it;

    // onune tas cikana veya tahtanin sonuna kadar sola gider
    string pos1 = sol(pozisyon);
    while(pos1 != "-"){
        it = tahta.find(pos1);
        if(it != tahta.end()){ // karede tas var
            isTehdit(it->second);
            break;
        }

        pos1 = sol(pos1);
    }

    // sag
    string pos2 = sag(pozisyon);
    while(pos2 != "-"){
        it = tahta.find(pos2);
        if(it != tahta.end()){ // karede tas var
            isTehdit(it->second);
            break;
        }

        pos2 = sag(pos2);
    }

    // yukari
    string pos3 = ust(pozisyon);
    while(pos3 != "-"){
        it = tahta.find(pos3);
        if(it != tahta.end()){ // karede tas var
            isTehdit(it->second);
            break;
        }

        pos3 = ust(pos3);
    }

    // asagi
    string pos4 = alt(pozisyon);
    while(pos4 != "-"){
        it = tahta.find(pos4);
        if(it != tahta.end()){ // karede tas var
            isTehdit(it->second);
            break;
        }

        pos4 = alt(pos4);
    }

    // sol alt capraz
    string pos5 = sol(alt(pozisyon));
    while(pos5 != "-"){
        it = tahta.find(pos5);
        if(it != tahta.end()){ // karede tas var
            isTehdit(it->second);
            break;
        }

        pos5 = sol(alt(pos5));
    }

    // sag alt capraz
    string pos6 = sag(alt(pozisyon));
    while(pos6 != "-"){
        it = tahta.find(pos6);
        if(it != tahta.end()){ // karede tas var
            isTehdit(it->second);
            break;
        }

        pos6 = sag(alt(pos6));
    }

    // sag ust capraz
    string pos7 = sag(ust(pozisyon));
    while(pos7 != "-"){
        it = tahta.find(pos7);
        if(it != tahta.end()){ // karede tas var
            isTehdit(it->second);
            break;
        }

        pos7 = sag(ust(pos7));
    }

    // sol ust capraz
    string pos8 = sol(ust(pozisyon));
    while(pos8 != "-"){
        it = tahta.find(pos8);
        if(it != tahta.end()){ // karede tas var
            isTehdit(it->second);
            break;
        }

        pos8 = sol(ust(pos8));
    }
}
