//
//  main.cpp
//  leetcode_part_one
//
//  Created by 王子昱 on 2018/11/8.
//  Copyright © 2018 王子昱. All rights reserved.
//

#include <iostream>
#include <string>
#include <unordered_map>
#include <limits.h>
#include <stdlib.h>
using namespace std;
class Solution{
public:
    string fractionToDecimal(int numerator, int denominator) {
        string decimal = "";
        if (numerator == 0) {
            return "0";
        }
        if (denominator == 0) return decimal;
        
        long long num = abs((long long)numerator);
        long long den = abs((long long)denominator);
        long long rest = 0;
        
        unordered_map<long long, int>restMap;
        
        if (num % den == 0)
            decimal = to_string(num/den);
        else
            decimal = to_string(num/den) + '.';
        
        int index = decimal.length();
        rest = num % den;
        while (rest != 0 && restMap.find(rest)==restMap.end()) {
            restMap[rest] = index++;
            rest *= 10;
            decimal += to_string(rest / den);
            rest = rest % den;
        }
        
        if (rest != 0){
            decimal.insert(restMap[rest], 1, '(');
            decimal.insert(decimal.length(), 1, ')');
        }
        if ((numerator<0 && denominator<0) ||
            (numerator > 0 && denominator>0))
            return decimal;
        else
            return "-"+decimal;
    }
};



int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    Solution s;
    int numerator = 11;
    int denominator = 3;
    string res = s.fractionToDecimal(numerator, denominator);
    cout << res << endl;
    return 0;
}
