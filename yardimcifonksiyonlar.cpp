#include "yardimcifonksiyonlar.h"

#include <iostream>
using namespace std;

yardimciFonksiyonlar::yardimciFonksiyonlar()
{

}

// pos = 1 ise b8 dondur
// pos = 24 ise a5 dondur
string yardimciFonksiyonlar::inttoPos(int pos)
{
    char yatayPos = yatay[pos % 8]; // a,b,c,d...
    int dikeyPos = -(pos / 8 - 8); // 1,2,3,4...
    string pozisyon = "";
    pozisyon += yatayPos;
    pozisyon += to_string(dikeyPos);

    return pozisyon;
}


string yardimciFonksiyonlar::down(string pos)
{
    if(pos == "-")
        return "-";

    char yatayP = pos[0];
    int dikeyP = (pos[1] - '0');

    if(dikeyP == 1){ // asagi gidemez
        return "-";
    } else {
        dikeyP -= 1;

        string pozisyon = "";
        pozisyon += yatayP;
        pozisyon += to_string(dikeyP);

        return pozisyon;
    }
}

string yardimciFonksiyonlar::up(string pos)
{
    if(pos == "-")
        return "-";

    char yatayP = pos[0];
    int dikeyP = (pos[1] - '0');

    if(dikeyP == 8){ // yukari gidemez
        return "-";
    } else {
        dikeyP += 1;

        string pozisyon = "";
        pozisyon += yatayP;
        pozisyon += to_string(dikeyP);

        return pozisyon;
    }
}

string yardimciFonksiyonlar::right(string pos)
{
    if(pos == "-")
        return "-";

    char yatayP = pos[0];
    int dikeyP = (pos[1] - '0');

    if(yatayP == 'h'){ // saga gidemez
        return "-";
    } else {
        for(int k = 0; k < 8; k++){
            if(yatay[k] == yatayP){
                yatayP = yatay[k+1];
                break;
            }
        }

        string pozisyon = "";
        pozisyon += yatayP;
        pozisyon += to_string(dikeyP);

        return pozisyon;
    }
}

string yardimciFonksiyonlar::left(string pos)
{
    if(pos == "-")
        return "-";

    char yatayP = pos[0];
    int dikeyP = (pos[1] - '0');

    if(yatayP == 'a'){ // sola gidemez
        return "-";
    } else {
        for(int k = 0; k < 8; k++){
            if(yatay[k] == yatayP){
                yatayP = yatay[k-1];
                break;
            }
        }

        string pozisyon = "";
        pozisyon += yatayP;
        pozisyon += to_string(dikeyP);

        return pozisyon;
    }
}

