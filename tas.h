#ifndef TAS_H
#define TAS_H

#include <string>
#include <map>

using namespace std;

class tas {

public:
    tas(int puan, char renk);

    virtual void hareket_et(string pozisyon, map<string, tas*> tahta)=0; // hareket edebilecegi kareleri ve tehdit ettigi taslari bul
    void tehdit(); // tehdit altında, puanını yarıla

    double getAnlik_puan() const;
    void setAnlik_puan(double newAnlik_puan);

    char getRenk() const;
    bool ayniTakim(char renk); // argumanla renkle ayni takimda miyim?
    void isTehdit(tas* rakip); // rakip tasla ayni takimda degilse, rakibin puanini yarila

    string sol(string pozisyon); // tahtada 1 sola giderse ulasacagi pozisyonu dondur
    string sag(string pozisyon); // tahtada 1 saga giderse
    string alt(string pozisyon); // tahtada 1 asagi giderse
    string ust(string pozisyon); // tahtada 1 yukari giderse

private:
    char renk;
    int puan;
    double anlik_puan;
};


#endif // TAS_H
