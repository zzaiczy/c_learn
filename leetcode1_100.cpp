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


// 给定一个未排序的整数数组 nums ，找出数字连续的最长序列（不要求序列元素在原数组中连续）的长度。

// 请你设计并实现时间复杂度为 O(n) 的算法解决此问题。

 

// 示例 1：

// 输入：nums = [100,4,200,1,3,2]
// 输出：4
// 解释：最长数字连续序列是 [1, 2, 3, 4]。它的长度为 4。

// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         if(nums.size()==0){
//             return 0;
//         }

//         unordered_map<int,int> int_map;
//         int ans = 1;
        
//         for(int i=0;i<nums.size();i++){
//             int_map[nums[i]]=i;
//         }

//         unordered_map<int,int>::iterator it;
        
//         for(int i=0;i<nums.size();i++){
            
//             it = int_map.find(nums[i]-1);

//             if(it!=int_map.end()){
//                 continue;
//             }

//             it = int_map.find(nums[i]+1);
//             int j = 1;
//             while(it!=int_map.end()){
//                 j++;
//                 it = int_map.find(nums[i]+j);
//             }

//             ans = max(j,ans);
//         }

//         return ans;
//       }
// };

// int main()
// {
//     vector<int> nums = {100,4,200,1,3,2};

//     Solution s = Solution();
//     int ans = s.longestConsecutive(nums);

//     cout<< ans <<endl;
    
//     return 0;
// }


// 给你一个 非空 整数数组 nums ，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。

// 你必须设计并实现线性时间复杂度的算法来解决此问题，且该算法只使用常量额外空间。

 

// 示例 1 ：

// 输入：nums = [2,2,1]
// 输出：1

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {

//         int ans = nums[0];
        
//         for(int i=1;i<nums.size();i++){
//             ans = ans ^ nums[i];
//         }

//         return ans;
//       }
// };

// int main()
// {
//     vector<int> nums = {2,2,1};

//     Solution s = Solution();
//     int ans = s.singleNumber(nums);

//     cout<< ans <<endl;
    
//     return 0;
// }

// 给定一个大小为 n 的数组 nums ，返回其中的多数元素。多数元素是指在数组中出现次数 大于 ⌊ n/2 ⌋ 的元素。

// 你可以假设数组是非空的，并且给定的数组总是存在多数元素。

 

// 示例 1：

// 输入：nums = [3,2,3]
// 输出：3


// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {

//         int candidate = nums[0];
//         int cnt = 1;
        
//         for(int i=1; i<nums.size(); i++){
//             if(cnt>0){
//                 if(candidate==nums[i]){
//                     cnt++;
//                 }else{
//                     cnt--;
//                 }
//             }else{
//                 candidate = nums[i];
//                 cnt = 1;
//             }
//         }
//         return candidate;
//       }
// };

// class Solution {
//     int selectElement(vector<int>& nums, int left, int right) {
//         if (left==right) return nums[left];
//         int mid = left + (right-left)/2;
//         int leftelement =  selectElement(nums, left, mid);
//         int rightelement =  selectElement(nums, mid+1, right);

//         if (countElement(nums, leftelement, left, right) > (right-left + 1)/2){
//             return leftelement;
//         }
//         if (countElement(nums, rightelement, left, right) > (right-left + 1)/2){
//             return rightelement;
//         }

//         return -1;

//     }

//     int countElement(vector<int>& nums, int target, int left, int right) {
//         int cnt = 0;
//         for (int i = left; i <= right; i++)
//         {
//             if(nums[i]==target) {
//                 cnt++;
//             }
//         }
        
//         return cnt;
//     }


// public:
//     int majorityElement(vector<int>& nums) {
//         return selectElement(nums, 0, nums.size()-1);
//       }
// };



// int main()
// {
//     vector<int> nums = {3,2,3};

//     Solution s = Solution();
//     int ans = s.majorityElement(nums);

//     cout<< ans <<endl;
    
//     return 0;
// }



// class Solution {
// public:
//     int uniquePaths(int m, int n) {
//         if (m == 0 || n == 0) return 0;
//         vector<vector<int>> dp(m, vector<int>(n, 0));
//         dp[0][0] = 1;
//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 if(i==0 && j==0){continue;}
//                 if(i==0){
//                     dp[0][j] = dp[0][j] + dp[i][j - 1];
//                 }
//                 else if(j==0){
//                     dp[i][0] = dp[i][0] + dp[i - 1][j];
//                 }else{
//                     dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//                 }
//             }
//         }
//         return dp[m-1][n-1];

//     }
// };



// int main()
// {
//     int m=3,n=7;

//     Solution s = Solution();
//     int ans = s.uniquePaths(m,n);

//     cout<< ans <<endl;
    
//     return 0;
// }

// 给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。

// 请注意 ，必须在不复制数组的情况下原地对数组进行操作。

 

// 示例 1:

// 输入: nums = [0,1,0,3,12]
// 输出: [1,3,12,0,0]

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int n = nums.size(), left = 0, right = 0;
//         while (right < n) {
//             if (nums[right]) {
//                 swap(nums[left], nums[right]);
//                 left++;
//             }
//             right++;
//         }
//     }
// };


// int main()
// {
//     vector<int> nums = {0,1,0,3,12};

//     Solution s = Solution();
//     s.moveZeroes(nums);

//     for(int i=0;i<nums.size();i++){
//         cout<< nums[i] <<endl;
//     }
    
//     return 0;
// }

#include<bits/stdc++.h>
#define M 500005

int a[M],d[M],t[M],n;
int lowbit(int x)
{
	return x&(x-1);
}

// int add(int x)//把包含这个数的结点都更新 
// {
// 	while(x<=n)//范围 
// 	{
// 		t[x]++;
// 		x+=lowbit(x);
// 	}
// }
// int sum(int x)//查询1~X有几个数加进去了 
// {
// 	int res=0;
// 	while(x>=1)
// 	{	
// 		res+=t[x];
// 		x-=lowbit(x);
// 	}
// 	return res;
// }
// bool cmp(int x,int y)//离散化比较函数 
// {
// 	if(a[x]==a[y]) return x>y;//避免元素相同 
// 	return a[x]>a[y];//按照原序列第几大排列 
// }
// int main()//402002139
// {
// 	//freopen("in.txt","r",stdin);
// 	long long ans=0;
// 	cin>>n;
// 	for(int i=1;i<=n;i++)
// 	cin>>a[i],d[i]=i;
	
// 	sort(d+1,d+n+1,cmp);//离散化 
	
// 	for(int i=1;i<=n;i++)
// 	{
// 		add(d[i]);//把这个数放进去 
// 		ans+=sum(d[i]-1);//累加 
// 	}
// 	cout<<ans;
// 	return 0;
// }


