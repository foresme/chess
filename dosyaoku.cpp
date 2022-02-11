#include "dosyaoku.h"
#include <iostream>
#include <fstream>

dosyaOku::dosyaOku()
{

}


string *dosyaOku::oku(string fileName)
{
    string myText;
    ifstream MyReadFile(fileName);

    if(!MyReadFile){
        cout << "DOSYA BULUNAMADI!" << endl;
        return nullptr;

    } else {

        // Use a while loop together with the getline() function to read the file line by line

        string del = " ";
        string *positions = new string[64];
        int position = 0;

        while (getline (MyReadFile, myText)) {
            int start = 0;
            int end = myText.find(del);
            while (end != -1) {
                positions[position++] = myText.substr(start, end - start);
                start = end + del.size();
                end = myText.find(del, start);
            }
            positions[position++] = myText.substr(start, end - start);
        }

        MyReadFile.close();
        return positions;
    }
}

