#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <stdio.h>
#include <sstream>
#include <iterator>
#include <math.h>
#include <algorithm>
#include <numeric>

using namespace std;

// hot problem set 1

// 给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。
// 你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。
// 你可以按任意顺序返回答案。


// 示例 1：

// 输入：nums = [2,7,11,15], target = 9
// 输出：[0,1]
// 解释：因为 nums[0] + nums[1] == 9 ，返回 [0, 1] 。


// class Solution1{
//     public:
//       vector<int> twoSum(vector<int>& nums , int target){
//         unordered_map<int,int> idx_map;
//         vector<int> ans;
//         for(int i=0;i<nums.size();i++){
//             unordered_map<int, int>::iterator it = idx_map.find(target-nums[i]);
//             if(it!=idx_map.end()){
//                 ans.push_back(it->second);
//                 ans.push_back(i);
//                 break;
//             }
//             idx_map[nums[i]]=i;
//         }
//         return ans;
//       }
// };

// int main1()
// {
//     vector<int> nums = {4,2,7,1,3,6,9};

//     int target = 9;
//     Solution1 s = Solution1();
//     vector<int> ans = s.twoSum(nums,target);

//     for (int i = 0; i < ans.size(); i++){
//         cout << ans[i] << " ";
//     }
    
//     return 0;
// }


// 给你一个字符串数组，请你将 字母异位词 组合在一起。可以按任意顺序返回结果列表。

// 字母异位词 是由重新排列源单词的字母得到的一个新单词，所有源单词中的字母通常恰好只用一次。

 

// 示例 1:

// 输入: strs = ["eat", "tea", "tan", "ate", "nat", "bat"]
// 输出: [["bat"],["nat","tan"],["ate","eat","tea"]]

// class Solution{
//     public:
//       vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         unordered_map<string,vector<string>> str_map;
//         vector<vector<string>> ans;
        
       

//         for(int i=0;i<strs.size();i++){

//             vector<int> str_cnt = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

//             stringstream sstream;
          
//             for(char &s : strs[i]){
//                 str_cnt[int(s)-97] += 1;
//             }


//             copy(str_cnt.begin(), str_cnt.end(), ostream_iterator<int>(sstream, "_"));

//             string key = sstream.str();
//             unordered_map<string,vector<string>>::iterator it = str_map.find(key);

//             if(it!=str_map.end()){
//                 it->second.push_back(strs[i]);
//             }else{
//                 str_map[key] = {strs[i]};
//             }
//         }

        
//         for (auto it = str_map.begin(); it != str_map.end(); it++) {
//             ans.push_back(it->second);
//         }

//         return ans;
//       }
// };

// int main()
// {
//     vector<string> strs = {"bdddddddddd","bbbbbbbbbbc"};

//     Solution s = Solution();
//     vector<vector<string>> ans = s.groupAnagrams(strs);

//     for (int i = 0; i < ans.size(); i++){
//         for(int j = 0; j < ans[i].size(); j++){
//             cout << ans[i][j] << " ";
//         }
//         cout << endl;
//     }
    
//     return 0;
// }
