class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> asd;
        
         sort(nums.begin(),nums.end());
        vector<int> news;
        news=nums;
         vector<vector<int>> ans;
        
        next_permutation(nums.begin(),nums.end());
      
        asd.insert(nums);
        while(nums!=news){
            vector<int> fn;
            next_permutation(nums.begin(),nums.end());
            
            asd.insert(nums);
        }
        set<vector<int>> :: iterator itr;
        for (itr = asd.begin(); itr != asd.end(); itr++) {
            ans.push_back(*itr);
        
    }
        return ans;
        
    }
};
