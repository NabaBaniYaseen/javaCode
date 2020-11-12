/*
Problem Link on LeetCode:
https://leetcode.com/problems/subsets-ii/
*/

class Solution {
public:
      
void subsetsUtil(vector<int>& A, vector<vector<int> >& res,  vector<int>& subset, int index){
     res.push_back(subset);
     for (int i = index; i < A.size(); i++) { 
        subset.push_back(A[i]);  
        subsetsUtil(A, res, subset, i + 1); 
        subset.pop_back(); 
    } 
    return; 
} 
  vector<vector<int> > subs(vector<int>& vec){
       vector<int> subset; 
       vector<vector<int> > res; 
       int index = 0; 
       subsetsUtil(vec, res, subset, index); 
  
      return res;
  } 
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
            sort(nums.begin(),nums.end());
           vector<vector<int>> res=subs(nums);
            set<vector<int>> s(res.begin(), res.end()); 
           	std::vector<vector<int>> output(s.begin(), s.end());

            return output;
        }   
    
 };