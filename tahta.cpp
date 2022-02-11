#include "tahta.h"
#include "yardimcifonksiyonlar.h"

#include "kale.h"
#include "piyon.h"
#include "fil.h"
#include "at.h"
#include "vezir.h"
#include "sah.h"

tahta::tahta(string *positions)
{
    for(int k = 0; k < 64; k++){
        char tasTipi = positions[k][0];
        char tasRenk = positions[k][1];
        string pos = yardimciFonksiyonlar().inttoPos(k); // int degeri a8, b7 gibi satranc karesine donustur

        switch (tasTipi) {
        case 'p':
            tasEkle(pos, new piyon(tasRenk));
            break;
        case 'k':
            tasEkle(pos, new kale(tasRenk));
            break;
        case 'a':
            tasEkle(pos, new at(tasRenk));
            break;
        case 'f':
            tasEkle(pos, new fil(tasRenk));
            break;
        case 'v':
            tasEkle(pos, new vezir(tasRenk));
            break;
        case 's':
            tasEkle(pos, new sah(tasRenk));
            break;
        }
    }
}

void tahta::tasEkle(string pozisyon, tas *yeniTas)
{
    taslar.insert( pair<string, tas*>(pozisyon, yeniTas) );
}

void tahta::puanHesabi()
{
    double siyahToplam = 0.0;
    double beyazToplam = 0.0;
    for(auto const& x : taslar){
        if(x.second->getRenk() == 's'){
            siyahToplam += x.second->getAnlik_puan();
        } else {
            beyazToplam += x.second->getAnlik_puan();
        }
    }

    cout << "BEYAZ: " << beyazToplam << " SİYAH: " << siyahToplam << endl;
}

void tahta::oyna()
{
    // tum taslar icin hareket et ve potansiyel kareleri hesapla
    for(auto const& x : taslar){
        x.second->hareket_et(x.first, taslar);
    }
}
