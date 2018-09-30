//
//  main.c
//  Guess_Word
//
//  Created by 王子昱 on 2018/9/25.
//  Copyright © 2018年 王子昱. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define maxn 100
int left, chance;
char s[maxn], s2[maxn];
int win, lose;

void guess(char ch){
    int bad = 1;
    for (int i = 1; i<strlen(s); i++) {
        if(s[i] == ch) {
            left--;
            s[i] = ' ';
            bad = 0;
        }}
    if (bad) {
            --chance;
        }
    if (!chance) {
            lose=1;
        }
    if (!left) {
            win=1;
        }
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int rnd;
    while (scanf("%d%s%s", &rnd, s, s2) == 3 && rnd != -1) {
        printf("round %d\n", rnd);
        win = lose = 0;
        left = strlen(s);
        chance = 7;
        for (int i =0; i<strlen(s2); i++) {
            guess(s2[i]);
            if(win || lose) break;
        }
        
        if (win)    printf("you win\n");
        else    if (lose) printf("you lose\n");
        else    printf("you chickened out.\n");
       
    }
    
    return 0;
}
