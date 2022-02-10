#ifndef YARDIMCIFONKSIYONLAR_H
#define YARDIMCIFONKSIYONLAR_H

#include <string>
 using namespace std;

const char yatay[9] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};

class yardimciFonksiyonlar
{
public:
    yardimciFonksiyonlar();

    static string inttoPos(int pos);
    static int postoInt(string pos);
    static string down(string pos);
    static string up(string pos);
    static string right(string pos);
    static string left(string pos);
    static string solalt(string pos);
    static string sagalt(string pos);
    static string solust(string pos);
    static string sagust(string pos);

};

#endif // YARDIMCIFONKSIYONLAR_H
