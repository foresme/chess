#include "tahta.h"
#include "dosyaoku.h"
#include "yardimcifonksiyonlar.h"

#include <iostream>
using namespace std;

tahta::tahta()
{
    dosyaOku dosyaoku = dosyaOku();
    string *positions = dosyaoku.oku();

    for(int k = 0; k < 64; k++){
        //cout << positions[k] << endl;
        char tasTipi = positions[k][0];
        char tasRenk = positions[k][1];
        string pos = yardimciFonksiyonlar().inttoPos(k);

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

    oyna();
    puanHesabi();
}

void tahta::tasEkle(string pozisyon, tas *yeniTas)
{
    taslar.insert( pair<string, tas*>(pozisyon, yeniTas) );
}

double tahta::puanHesabi()
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

    cout << "BEYAZ " << beyazToplam << " SİYAH " << siyahToplam << endl;
}

void tahta::oyna()
{
    for(auto const& x : taslar){
        x.second->hareket_et(x.first, taslar);
    }
}
