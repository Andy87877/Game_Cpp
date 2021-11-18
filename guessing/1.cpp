#include "Interface.h"

void One() { //使用者猜測
    clear;
    srand(time(NULL)); //洗牌
    int x = (rand()%100) + 1; //電腦的數字
    int max = 100, min = 1; //大 小 用來看間隔
    int times = 0, num = -1; //計算猜幾次 猜的數字
    do {
        cout << "目前範圍為" << min << "~" << max << "\n請猜一個數字: ";
        cin >> num;
        times++; //猜次數加一
        if ((num < min) || (num > max)) {//錯誤範圍
            clear;
            cout << "你還好嗎?\n這個不是範圍裡的數字\n";
            times--;
        } else if (x > num) { //猜小
            clear;
            cout << "要再猜大一點 \n";
            min = num;
        } else if (x < num) { //猜小
            clear;
            cout << "要再猜小一點\n";
            max = num;
        }
        
    } while(num != x);
    // end
    clear;
    cout << "你猜對了!!!!\n";
    cout << "猜了" << times << "次\n";
    sleep(3);
    clear;
    Interface();
}
