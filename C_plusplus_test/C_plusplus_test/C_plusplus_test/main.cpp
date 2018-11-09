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
    cout<<"\n";

    
    return 0;
}
