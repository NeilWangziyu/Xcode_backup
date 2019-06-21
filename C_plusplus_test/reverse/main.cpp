//
//  main.cpp
//  reverse
//
//  Created by 王子昱 on 2019/6/21.
//  Copyright © 2019 王子昱. All rights reserved.
//
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::begin;
using std::end;
using std::map;


class Solution {
public:
    int reverse(int x) {
        int res = 0;
        while (x != 0) {
            if (abs(res) > INT_MAX / 10) return 0;
            res = res * 10 + x % 10;
            x /= 10;
        }
        return res;
        
    }
};

class Solution2{
public:
    int reverse(int x){
        long res = 0;
        while (x != 0) {
            res = 10 * res + x % 10;
            x /= 10;
        }
        return (res > INT_MAX || res < INT_MIN) ? 0: res;
    }
};


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    Solution S;
    int res = S.reverse(-190);
    std::cout << res << std::endl;
    
    Solution2 S2;
    int res2 = S2.reverse(-190);
    std::cout << res2 << std::endl;

    
    return 0;
}
