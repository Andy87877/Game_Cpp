// https://replit.com/@andy8787main/guessing-Cai-Mi-Ma#main.cpp
// https://github.com/nanshan-high-school/20211111-homework-basic
#include <iostream>
#include <stdlib.h> 
#include <time.h>
using namespace std;

void One() { //使用者猜測
    int x = (rand()%100) + 1; //電腦的數字
    int max = 100, min = 1; //大 小 用來看間隔
    int times = 0, num = -1; //計算猜幾次 猜的數字
    do {
        cout << "目前範圍為" << min << "~" << max << "\n請猜一個數字: ";
        cin >> num;
        times++; //猜次數加一
        
        if ((num <= min) || (num >= max)) {//錯誤範圍
            cout << "你還好嗎?\n這個不是範圍裡的數字\n";
            times--;
        } else if (x > num) { //猜小
            cout << "要再猜大一點 \n";
            min = num;
        } else if (x < num) { //猜小
            cout << "要再猜小一點\n";
            max = num;
        }
    } while(num != x);

    cout << "你猜對了!!!!\n";
    cout << "猜了" << times << "次\n";
}

void Two() { //兩個使用者輪流猜測，看是誰猜到就是勝利者
    cout << "尚未開發2";
}

void Three() { //電腦猜測
    cout << "尚未開發3";
}

void Four() { //電腦跟使用者互猜
    cout << "尚未開發4";
}

int main() {
    srand(time(NULL)); //洗牌
    
    int WhatMod;
    cout << "請輸入編號(1~4)來選擇模式\n1.使用者猜測\n2.兩個使用者輪流猜測，看是誰猜到就是勝利者\n3.電腦猜測\n4.電腦跟使用者互猜\n編號為: ";
    cin >> WhatMod;
    switch(WhatMod) { 
        case 1:
            One();
            break; 
        case 2: 
            Two();
            break; 
        case 3: 
            Three();
            break; 
        case 4: 
            Four();
            break; 
        default: 
            cout << "輸入編號錯誤" << endl; 
            break;
    } 
} 

/*
四種模式
1.使用者猜測
2.兩個使用者輪流猜測，看是誰猜到就是勝利者
3.電腦猜測
4.電腦跟使用者互猜
*/
