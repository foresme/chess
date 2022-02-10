#include "yardimcifonksiyonlar.h"

#include <iostream>
using namespace std;

yardimciFonksiyonlar::yardimciFonksiyonlar()
{

}

string yardimciFonksiyonlar::inttoPos(int pos)
{
    char yatayPos = yatay[pos % 8]; // a,b,c,d...
    int dikeyPos = -(pos / 8 - 8); // 1,2,3,4...
    string pozisyon = "";
    pozisyon += yatayPos;
    pozisyon += to_string(dikeyPos);

    return pozisyon;
}

int yardimciFonksiyonlar::postoInt(string pos)
{
    char yatayP = pos[0];
    int dikeyP = (pos[1] - '0');
    int pozisyon = 1;

    for(int k = 0; k < 8; k++){
        if(yatayP == yatay[k]){
            pozisyon += k;
            break;
        }
    }

    pozisyon += dikeyP * 8;

    return pozisyon;


}

string yardimciFonksiyonlar::down(string pos)
{
    if(pos == "-")
        return "-";

    char yatayP = pos[0];
    int dikeyP = (pos[1] - '0');

    if(dikeyP == 1){
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

    if(dikeyP == 8){
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

    if(yatayP == 'h'){
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

    if(yatayP == 'a'){
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

string yardimciFonksiyonlar::solalt(string pos)
{
    if(pos == "-")
        return "-";

    string position = down(left(pos));

    return position;
}

string yardimciFonksiyonlar::sagalt(string pos)
{
    if(pos == "-")
        return "-";

    string position = down(right(pos));

    return position;
}

string yardimciFonksiyonlar::solust(string pos)
{
    if(pos == "-")
        return "-";

    string position = up(left(pos));

    return position;
}

string yardimciFonksiyonlar::sagust(string pos)
{
    if(pos == "-")
        return "-";

    string position = up(right(pos));

    return position;
}
