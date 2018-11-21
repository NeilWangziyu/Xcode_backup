//
//  main.cpp
//  primer_Two
//
//  Created by 王子昱 on 2018/11/9.
//  Copyright © 2018 王子昱. All rights reserved.
//

#include <iostream>
#include <string>
#include <iterator>
#include <vector>
using std::vector;
using std::cin;
using std::cout; using std::endl;
using std::string;
using std::begin;
using std::end;
//using namespace std;

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
//    以下是迭代器内容
    
    string sb = "lsome string";
    if (sb.begin() != sb.end()){
        auto it1 = sb.begin();
        cout << *it1 << endl;
        *it1 = toupper(*it1);
    }
    cout << sb << endl;
    
    string sb2 = "some string";
    auto it = sb2.begin();
    while (it != sb2.end()) {
        *it = toupper(*it);
        it++;
    }
    cout << sb2 << endl;
    
    vector<int> text = {-1, 0,1,2,3,4,5,6,7,8};
    auto beg = text.begin();
    auto end = text.end();
    auto mid = beg + (beg - end)/2;
    int sought = 7;
    while (mid!=end and *mid!=sought) {
        if (sought<*mid) {
            end = mid;
        }
        else
        {
            beg = mid+1;
        }
        mid = beg + (beg - mid)/2;
    }
    cout << *mid<<endl;
    
    auto res = find(text.begin(), text.end(), 11);
    if (res != text.end()){
        int dis = distance(text.begin(), res);
        cout << "index is " << dis << endl;
    }
    else{
        cout << "can not find it" << endl;
    }
    
    string name[] = {"one", "two", "three"};
    string *p = &name[0];
    cout << *p << endl;
    string *p2 = name;
    cout << *p2 << endl;
    
    int ia[] = {1,2,3,4,5,6};
    auto ia2(ia);
    cout << *ia2 << endl;
    decltype(ia) ia3 = {0,1,2,3,4};
    cout << *ia3 << endl;
    
    int arr[] = {1,2,3,45,6,0};
    int *p1 = arr;
    int *pbeg = begin(arr);
    cout << *pbeg << endl;
    
    
//    while (p1 != pend) {
//        cout << *p1 << endl;
//        p1++;
//    }
    return 0;
}

