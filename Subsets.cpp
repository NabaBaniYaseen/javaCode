/*
Problem Link on LeetCode
https://leetcode.com/problems/subsets/
*/

class Solution {
public:
    vector<vector<int>>output;
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>sub;
        findSub(nums,sub,0);
        return output;
    }
    void findSub(vector<int> &nums,vector<int> &sub,int index){
        output.push_back(sub);
        for(int i=index;i<nums.size();i++){
            sub.push_back(nums[i]);
            findSub(nums,sub,i+1);
            sub.pop_back();
        }
        
        
    }
};