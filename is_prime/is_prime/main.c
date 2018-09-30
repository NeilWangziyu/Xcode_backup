//
//  main.c
//  is_prime
//
//  Created by 王子昱 on 2018/9/25.
//  Copyright © 2018年 王子昱. All rights reserved.
//

#include <stdio.h>

int is_prime(int n)
{
    if (n <= 1) {
        return 0;
    }
    int m = floor(sqrt(n)+0.5);
    for (int i = 2; i<=m; i++) {
        if (n%i==0) {
            return 0;
        }
    }
    return 1;
}

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}


int main(int argc, const char * argv[]) {
// for is_prime
//    int x;
//    printf("give me a number\n");
//    scanf("%d", &x);
//    if (is_prime(x))
//        printf("it is prime\n");
//    else
//        printf("is is not prime\n");
    int a=3, b=4;
    swap(&a, &b);
    printf("%d %d\n", a, b);
    
    
    return 0;
}
