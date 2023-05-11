#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>

using namespace std;

// hot problem set 1

// 给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。
// 你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。
// 你可以按任意顺序返回答案。


// 示例 1：

// 输入：nums = [2,7,11,15], target = 9
// 输出：[0,1]
// 解释：因为 nums[0] + nums[1] == 9 ，返回 [0, 1] 。


class Solution{
    public:
      vector<int> twoSum(vector<int>& nums , int target){
        unordered_map<int,int> idx_map;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            unordered_map<int, int>::iterator it = idx_map.find(target-nums[i]);
            if(it!=idx_map.end()){
                ans.push_back(it->second);
                ans.push_back(i);
                break;
            }
            idx_map[nums[i]]=i;
        }
        return ans;
      }
};

int main()
{
    vector<int> nums = {4,2,7,1,3,6,9};

    int target = 9;
    Solution s = Solution();
    vector<int> ans = s.twoSum(nums,target);

    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    
    return 0;
}


