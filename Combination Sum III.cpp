/* Question Link on LeetCode 
https://leetcode.com/problems/combination-sum-iii/
*/
class Solution {
public:
    vector<vector<int>>output;
    int sum=0;
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>sub;
        combination(k,n,1,sub);
        return output;
    }
    void combination(int k, int n, int start,vector<int>&sub)
    {
        if((sub.size()==k)&&(sum==n))
            output.push_back(sub);
        for(int i=start;i<=9;i++){
            sum+=i;
            sub.push_back(i);
            combination(k,n,i+1,sub);
            sum-=sub[sub.size()-1];
            sub.pop_back();
            
        }
        
    }
};