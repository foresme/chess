#ifndef TAS_H
#define TAS_H

#include <string>
#include <map>

using namespace std;

class tas {

public:
    tas(char isim, int puan, char renk);

    virtual void hareket_et(string pozisyon, map<string, tas*> tahta)=0; // hareket edebilecegi kareleri ve tehdit ettigi taslari bul
    void tehdit(); // tehdit altında, puanını yarıla

    double getAnlik_puan() const;
    void setAnlik_puan(double newAnlik_puan);

    char getRenk() const;
    bool ayniTakim(char renk);
    void isTehdit(tas* rakip);

    string sol(string pozisyon);
    string sag(string pozisyon);
    string alt(string pozisyon);
    string ust(string pozisyon);

private:
    string isim; // pb, ks, ab vs.
    char renk;
    int puan;
    double anlik_puan;
};


#endif // TAS_H
