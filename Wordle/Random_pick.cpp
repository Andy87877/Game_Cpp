#include "Setup.h"

string random_pick() {
    srand(time(NULL));
    int x = rand() % Word_size;
    int i = 0;
    ifstream ifs;

    ifs.open("word.txt");
    string s;
    while (getline(ifs, s)) {
        if (i == x) {
            ifs.close();
            return s;
        }
        i++;
    }
    return 0;
}