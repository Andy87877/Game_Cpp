#include <iostream>
#include "Interface.h"
#include "across.h"
using namespace std;

void Interface() {      
    int WhatMod; // 模式
    clear;
    cout << "請輸入編號(1~4)來選擇模式\n1.使用者猜測\n2.兩個使用者輪流猜測，看是誰猜到就是勝利者(尚未開發完整)\n3.電腦猜測(尚未開發)\n4.電腦跟使用者互猜(尚未開發)\n編號為: ";
    cin >> WhatMod;
    (WhatMod == 1) ? One() : (WhatMod == 2) ? Two() : (WhatMod == 3) ? Three() : (WhatMod == 4) ? Four() : Interface();
}

/*
四種模式
1.使用者猜測
2.兩個使用者輪流猜測，看是誰猜到就是勝利者
3.電腦猜測
4.電腦跟使用者互猜
*/