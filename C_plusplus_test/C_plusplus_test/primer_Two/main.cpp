//
//  main.cpp
//  primer_Two
//
//  Created by 王子昱 on 2018/11/9.
//  Copyright © 2018 王子昱. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::cin;
using std::cout; using std::endl;
using std::string;
int main() {
    // insert code here...
//    std::cout << "Hello, World!\n";
//    cout << "enter two numbers: "<<endl;
//    int v1, v2;
//    cin >> v1 >> v2;
//    cout << "sum of this two number is " << v1 + v2 <<endl;

    cout << "this mainly talk about string " << endl;
    
    string s1;
    string s2(s1);
    string s10 = s1;
    string s3("value");
    string s4 = "values";
    string s5(10, 'c');
    cout << s4 << endl;
    string s7;
//    cin >> s7;
//    cout << s7 <<endl;
    string s8;
    
    for(int i=0; i<s4.length(); i++)
        cout << s4[i] <<endl;
    
    cout << s3 + " " +s4 <<endl;
    
    string s("HELLO World!!!!");
    decltype(s.size()) punct_cnt = 0;
    for (auto c : s)
        if (ispunct(c))
            ++punct_cnt;
    cout << punct_cnt << " punctuation characters in  " << s<< endl;
    
    
    for (auto &c : s)
        c = toupper(c);
    cout << s << endl;
    
//    const string digit = "0123456789ABCDEF";
//    string result;
//    string::size_type n;
//    while (cin>>n) {
//        if (n < digit.size())
//            result += digit[n];
//    }
//    cout << "what you input is " << result<< endl;
    
    
    vector<string> article = {"a", "an", "the"};
    cout << article.size()<<endl;
    
    vector<int> v{1,2,3,4,5,6,7,9};
    for (auto &i : v)
        i *= i;
    for (auto i :v)
        cout << i << " " ;
    cout <<  endl;
    
    return 0;
}
