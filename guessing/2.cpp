#include "Interface.h"
int Amax = 100, Amin = 1, Atimes = 0; //A方
int Bmax = 100, Bmin = 1, Btimes = 0; //B方
int num;
char say;

void Aguess() {
    cout << "目前B方的數字範圍為" << Bmin << "~" << Bmax << endl;
    cout << "A方猜數字: ";
    cin >> num;
    if ((num < Bmin) || (num > Bmax)) {//錯誤範圍
        cout << "你還好嗎?\n這個不是範圍裡的數字\n";
        Atimes--;
        Aguess();
    }
    cout << "B方請說\n猜大一點(B)\n猜小一點(S)\n答對了打其他字\n輸入: ";
    cin >> say;
    if (say == 'B') {
        Bmin = num;
    } else if (say == 'S'){
        Bmax = num;
    } else {
        clear;
        sleep(1);
        cout << "恭喜A方獲勝猜了" << Atimes << "次";
        sleep(3);
        Interface();
    }
    Atimes++;
}

void Bguess() {
    cout << "目前A方的數字範圍為" << Amin << "~" << Amax << endl;
    cout << "B方猜數字: ";
    cin >> num;
    if ((num < Amin) || (num > Amax)) {//錯誤範圍
        cout << "你還好嗎?\n這個不是範圍裡的數字\n";
        Btimes--;
        Bguess();
    }
    cout << "B方請說\n猜大一點(B)\n猜小一點(S)\n答對了打其他字\n輸入: ";
    cin >> say;
    if (say == 'B') {
        Amin = num;
    } else if (say == 'S'){
        Amax = num;
    } else {
        clear;
        sleep(1);
        cout << "恭喜B方獲勝猜了" << Btimes << "次";
        sleep(3);
        Interface();
    }
    Btimes++;
}

void Two() { //兩個使用者輪流猜測，看是誰猜到就是勝利者
    clear;
    cout << "請用1~100的數字";
    while(true) {
        Aguess();
        Bguess();
    }
}