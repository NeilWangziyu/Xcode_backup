//
//  twoSum.cpp
//  C_plusplus_test
//
//  Created by 王子昱 on 2019/6/17.
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
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for (int i = 0 ; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
//                cout << i << j << " ";
                if(target == nums[i] + nums[j]){
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result;
    }
    
    vector<int> twoSum2(vector<int>& nums, int target) {
        vector<int> result;
        for (int i = 0; i < nums.size(); ++i) {
            int surplus = target - nums[i];
            for (int j = i + 1; j < nums.size(); ++j) {
                if (surplus == nums[j]) {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result;
    }
    
    
    vector<int> twoSum3(vector<int>& nums, int target){
        vector<int> result;
        map<int, int> tmpmap;
//        键值为nums的值，变量值为nums下标
        for (int i = 0; i < nums.size();  ++ i) {
            tmpmap[nums[i]] = i;
        }
        
        for (int i = 0; i < nums.size(); ++i) {
            if (tmpmap.count(target - nums[i]) != 0 and tmpmap[target-nums[i]]!=i) {
                result.push_back(i);
                result.push_back(tmpmap[target - nums[i]]);
                break;
                
            }
        }
        return result;
    }
    
    
    vector<int> twoSum4(vector<int>& nums, int target){
        vector<int> result;
        map<int, int> tmpmap;
        
        for (int i = 0; i < nums.size(); ++i) {
            if (tmpmap.count(nums[i]) != 0){
                result.push_back(tmpmap[nums[i]]);
                result.push_back(i);
                break;
        }
            tmpmap[target - nums[i]] = i;
    }
        return result;
    }
    
    vector<int> twoSum5(vector<int>& nums, int target) {
        vector<int> null_;
        if(nums.size() <2 ) return null_;
        
        // 将向量nums赋值给新创建的向量
        vector<int> pos(nums);
        sort(pos.begin(), pos.end());// 将向量进行排序
        
        int i = 0, j = nums.size()-1;
        // 拿到满足条件的数
        while(i < j){
            if((pos[i] + pos[j]) > target)  j--;
            if((pos[i] + pos[j]) < target)  i++;
            if((pos[i] + pos[j]) == target)  break;
        }
        
        for(int k=0; k<nums.size(); k++){
            if(nums[k] == pos[i]) null_.push_back(k);
            else if (nums[k] == pos[j]) null_.push_back(k);
        }
        return null_;
        
    }
    
};


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    Solution s;
    
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> res = s.twoSum(nums, target);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    
    res = s.twoSum2(nums, target);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    
    res = s.twoSum3(nums, target);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    
    res = s.twoSum4(nums, target);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    
    
    nums = {3,2,4};
    target = 6;
    res = s.twoSum(nums, target);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    
    res = s.twoSum2(nums, target);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    
    res = s.twoSum3(nums, target);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    
    res = s.twoSum4(nums, target);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    
    
    return 0;

}
