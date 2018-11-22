//
//  main.cpp
//  C_plusplus_test
//
//  Created by 王子昱 on 2018/9/5.
//  Copyright © 2018年 王子昱. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int num = nums.size();
        for (int i=0; i<num; i++)
            for (int j=i+1; j<num; j++)
                if (nums[i] + nums[j] == target)
                    return {i, j};
                else
                    continue;
        return {-1};
    }
    
    vector<int> twoSum2(vector<int>& nums, int target){
        vector<int> res = {};
        map<int, int> m;
        
        int other;
        for (int i=0; i<nums.size(); i++) {
            other = target - nums[i];
            if(m.find(other)!=m.end()){
                res.push_back(m[other]);
                res.push_back(i);
                break;
                
            }
            m[nums[i]] = i;
        }
        return res;
    }
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int end = m + n - 1;
        m --;
        n --;
        while (m>=0&&n>=0) {
            if (nums2[n]>nums1[m]) {
                nums1[end--] = nums2[n--];
            }
            else
            {
                nums1[end--] = nums1[m--];
            }
        }
        while (n>=0) {
            nums1[end--] = nums2[n--];
        }
    }
    
    int nthUglyNumber(int n){
        if (n < 7)
            return n;
        
//        int [] ids = new int [3];
//        int [] uglys = new int[n];
        int ids[3];
        int uglys[n];
        uglys[0] = 1;
        ids[0] = 0;
        ids[1] = 0;
        ids[2] = 0;
        for (int i=1; i<n; i++) {
            int a = uglys[ids[0]] * 2;
            int b = uglys[ids[1]] * 3;
            int c = uglys[ids[2]] * 5;
            int min_num = min(a, min(b, c));
            if (min_num == a)   ids[0]++ ;
            if (min_num == b)   ids[1]++;
            if (min_num == c)    ids[2]++;
            uglys[i] = min_num;
        }
        return uglys[n-1];
    }
    
};



int main(int argc, const char * argv[]) {
//     insert code here...
    std::cout << "Hello, World!\n";
//    cout << "hello world"<< endl;
    
    Solution S;
    vector<int> nums = {1,2,3,4,5,6,7,9};
    int target = 15;
    
    vector<int> sum = S.twoSum(nums, target);
    for (int i=0; i<sum.size(); i++) {
        cout<<sum[i]<<",";
    }
    cout<<"\n";
    
    vector<int> sum2 = S.twoSum2(nums, target);
    for (int i=0; i<sum2.size(); i++) {
        cout<<sum2[i]<<",";
    }
    cout<<"\n";
    
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    int m = 3;
    int n = 3;
    S.merge(nums1, m, nums2, n);
    for (int i=0; i<nums1.size(); i++) {
        cout<<nums1[i]<<",";
    }
    cout<<"merge finished";
    cout<<"\n";

    int ugly_count = 30;
    int ugly = S.nthUglyNumber(ugly_count);
    cout << ugly << endl;
    
    
    return 0;
}
