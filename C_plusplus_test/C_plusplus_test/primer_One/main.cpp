//
//  main.cpp
//  primer_One
//
//  Created by 王子昱 on 2018/11/9.
//  Copyright © 2018 王子昱. All rights reserved.
//

#include <iostream>
#include <string>
#include "Sales_data.hpp"

int main() {
    // insert code here...
    printf("use printf to output\n");
//    std::cout << "Hello, World!\n";
//    std::cout << "Enter two numbers:" << std::endl;
//    int v1 = 0, v2 = 0;
//    std::cin >> v1 >> v2;
//    std::cout << "the mul of " << v1 << " and " << v2 <<" is "
//    << v1*v2 <<std::endl;
    
//    int sum = 0, val = 1;
//    while (val<=10) {
//        sum += val;
//        ++ val;
//    }
//    std::cout << " Sum of 1 to 10 is " << sum << std::endl;
    
//    int num = 10;
//    while (num>0) {
//        std::cout << "num is "<< num-- <<std::endl;
//    }
    
//    int x = 0;
//    for (int i=0; i<=10; i++) {
//        x += i;
//    }
//    std::cout << "from 0 to 10 is "<< x << std::endl;
    
    
//    int sum2 = 0, value = 0;
//    while (std::cin >> value) {
//        sum2 += value;
//    }
//    std::cout << "sum of input is " << sum2 << std::endl;
    
//    int currnum = 0 , val1 = 0;
//    if (std::cin >> currnum) {
//        int cnt = 1;
//        while (std::cin >> val1) {
//            if (val1 == currnum)
//                ++cnt;
//            else{
//                std::cout << currnum << " occurs "<< cnt << " times"<< std::endl;
//                currnum = val1;
//                cnt = 1;
//            }
//        }
//        std::cout << currnum << " occurs "<< cnt << " times"<< std::endl;
//    }
    
//    int ival = 42;
//    int *p = &ival;
//
//    std::cout << "pointer: "<<*p<<"\n";
//    *p = 20;
//    std::cout << "pointer: "<<*p<<"\n";
//    std::cout << "ival: "<<ival<<"\n";
//    ival = 30;
//    *p = ival;
//    std::cout << "pointer: "<<*p<<"\n";
//    int t = 10;
//    p = &t;
//    std::cout << "pointer address: "<< p <<"\n";
//    std::cout << "pointer: " << *p << std::endl;
//
//    int i =42;
//    int *p1 = &i;
//    *p1 = *p1 * *p1;
//    std::cout << i << std::endl;
//    std::cout << *p1 << std::endl;
//
//    const int bufSize = 512;
    
    Sales_data data1, data2;
    double price = 0;
    std::cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;
    price = 0;
    std::cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;
    
    if (data1.bookNo == data2.bookNo) {
        unsigned totalcnt = data1.units_sold + data2.units_sold;
        double totalReven = data1.revenue + data2.revenue;
        std::cout << "book:" << data1.bookNo << " " << totalcnt << "  "<<totalReven<<" ";
        if (totalcnt!=0)
            std::cout << "average price:" << totalReven/totalcnt << std::endl;
        else
            std::cout << "no sales"<<std::endl;
        return 0;
    }
    else{
        std::cout << "dont have same ISBN"<<std::endl;
        return -1;
    }
    
    
    
    
    return 0;
}
