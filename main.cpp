//
//  main.cpp
//  Hiraike
//
//  Created by Fumiya Mizuguchi on 2014/07/10.
//  Copyright (c) 2014年 Fumiya Mizuguchi. All rights reserved.
//

#include <iostream>
#include <ctype.h>

int main() {
    char inputs[1024]; // 入力された文字を格納する変数
    int i;
    int counts[10]; // 0~9の数字が何回打たれたか

    scanf("%s", inputs);

    // countsの初期化
    for (i = 0; i < 10; i++) {
        counts[i] = 0;
    }

    // 入力された数字のカウント
    for (i = 0; i < strlen(inputs); i++) {
        if (isdigit(inputs[i])) {
            int num = (int)(unsigned char)(inputs[i] - '0');
            counts[num]++;
        }
    }

    // 結果の表示
    for (i = 0; i < 10; i++) {
        printf("%d: %d回\n", i, counts[i]);
    }
}

