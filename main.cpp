#include <iostream>
#include "tahta.h"
#include "dosyaoku.h"

using namespace std;

int main(int argc,char* argv[])
{
    if(argc < 2){
        cout << "TEXT DOSYASI ARGUMANI EKSİK!" << endl;
        return -1;
    }

    dosyaOku dosyaoku = dosyaOku();

    tahta yeniOyun = tahta(dosyaoku.oku(argv[1]));
    yeniOyun.oyna();
    yeniOyun.puanHesabi();

    return 0;
}
