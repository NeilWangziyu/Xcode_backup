//
//  main.c
//  Ctest
//
//  Created by 王子昱 on 2018/8/31.
//  Copyright © 2018年 王子昱. All rights reserved.
//

#include <stdio.h>

#define maxn 105
int a[maxn];

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello World!\n");
    
// 第一题
// ----------------------------------
//    int i,j,k;
//    printf("\n");
//    for(i=1;i<5;i++) { // 以下为三重循环
//        for(j=1;j<5;j++) {
//            for (k=1;k<5;k++) { // 确保i、j、k三位互不相同
//                if (i!=k&&i!=j&&j!=k) {
//                    printf("%d,%d,%d\n",i,j,k);
//                }
//            }
//        }
//    }
// ----------------------------------
//    第二题
//    double i;
//    double bonus1, bonus2, bonus4, bonus6,bonus10, bonus;
//    printf("你的净利润是：\n");
//    scanf("%lf", &i);
//    bonus1 = 10 * 0.1;
//    bonus2 = bonus1 + 10 * 0.075;
//    bonus4 = bonus2 + 20 * 0.05;
//    bonus6 = bonus4 + 20 * 0.3;
//    bonus10 = bonus6 + 40 * 0.015;
//    if(i<=10) {
//        bonus=i*0.1;
//    } else if(i<=20) {
//        bonus=bonus1+(i-10)*0.075;
//    } else if(i<=40) {
//        bonus=bonus2+(i-20)*0.05;
//    } else if(i<=60) {
//        bonus=bonus4+(i-40)*0.03;
//    } else if(i<=100) {
//        bonus=bonus6+(i-60)*0.015;
//    } else if(i>100) {
//        bonus=bonus10+(i-100)*0.01;
//    }
//    printf("提成为：bonus=%lf",bonus);
//    printf("\n");
// ----------------------------------
//    第三题
//    int i,j,m,n,x;
//    for (i=1; i<168/2 +1;i++)
//    {
//        if(168%i == 0)
//        {
//            j = 168 / i;
//            if (i > j && (i + j)%2==0 && (i - j) % 2 == 0)
//            {
//                m = (i + j) / 2;
//                n = (i -j)/2;
//                x = n*n -100;
//                printf ("%d + 100 = %d * %d\n", x, n, n);
//                printf ("%d + 268 = %d * %d\n", x, m, m);
//            }
//        }
//    }
//    ----------------------------------
//    第四题
//    int day, month, year, sum, leap;
//    printf("输入年月日，格式为：年，月，日（2015,12,10）\n");
//    scanf("%d,%d,%d",&year, &month, &day);
//    switch (month) {
//        case 1:sum=0;break;
//        case 2:sum=31;break;
//        case 3:sum=59;break;
//        case 4:sum=90;break;
//        case 5:sum=120;break;
//        case 6:sum=151;break;
//        case 7:sum=181;break;
//        case 8:sum=212;break;
//        case 9:sum=243;break;
//        case 10:sum=273;break;
//        case 11:sum=304;break;
//        case 12:sum=334;break;
//        default:printf("date error");
//            break;
//    }
//    sum = sum + day;
//    if (year%400==0 ||(year%4==0 && year%100!=0)){
//        leap=1;
//    }else{
//        leap=0;
//    }
//    if (leap==1 && month >2) {
//        sum = sum + 1;
//    }
//    printf("这是一年的第%d天" ,sum);
//    printf("\n");
//    ----------------------------------
    
//    第八题
//    int i,j,result;
//    printf("\n");
//    for (i=1; i<10; i++) {
//        for (j=1; j<=i; j++) {
//            result = i*j;
//            printf("%d * %d = %-3d",i,j,result);
//        }
//        printf("\n");
//    }
//    ----------------------------------
//    第九题
//    int f1 = 1, f2=1, i;
//    for (i=1; i<20; i++) {
//        printf("%12d%12d\n", f1, f2);
//        f1 = f1 + f2;
//        f2 = f1 + f2;
//    }
//    ---------------------------------
//    第十题
//    int i , j;
//    for (i=101; i<200; i++) {
//        for (j =2; j<i; j++){
//            if(i%j==0)
//            break;
//        }
//        if(j == i)
//            printf("%d\n",i);
//    }
//    ---------------------------------
//    第十一题
//    int a, b, t, r;
//    printf("input two numbers:\n");
//    scanf("%d %d", &a, &b);
//    if(a<b)
//    {t = b; b = a; a = t;}
//    r = a % b;
//    int n = a*b;
//    while (r != 0) {
//        a = b;
//        b = r;
//        r = a%b;
//    }
//    printf("最大公约数是%d, 最小公倍数是%d\n", b, n/b);

//    ---------------------------------
//    第十二题
//    char c;
//    int letters = 0, spaces = 0, digits = 0, others = 0;
//    printf("input some characters\n");
//    while ((c=getchar())!='\n')
//    {
//        if ((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
//            letters ++;
//        else if(c>='0'&&c<='9')
//            digits ++;
//        else if(c==' ')
//            spaces ++;
//        else
//            others++;
//
//    }
//    printf("字母=%d,数字=%d,空格=%d,其他=%d\n",letters,digits,spaces,others);
//
//    ---------------------------------
//    int x, n=0;
//    while (scanf("%d", &x) == 1) {
//        a[n++] = x;
//    }
//    for (int i=n-1; i>=1; i--) {
//        printf("%d ", a[i]);
//    }
//    printf("%d \n", a[0]);
    
    
//    ---------------------------------
    char s[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    int i, c;
    while ((c = getchar()) != EOF) {
        for (i=1; s[i] && s[i]!=c; i++) {
            if (s[i]) {
                putchar(s[i-1]);
            }
            else putchar(c);
            
        }
    }
    

    return 0;
}
