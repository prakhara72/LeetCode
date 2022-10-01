class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         set<vector<int>> ans;
        vector<vector<int>> dd;
        int n=nums.size();
        for(int i=0;i<(1<<n);i++){
            vector<int> fn;
            for(int j=0;j<n;j++){
                if((i&(1<<j))!=0){
                    fn.push_back(nums[j]);
                }
            }
            sort(fn.begin(),fn.end());
            ans.insert(fn);
        }
        set<vector<int>> :: iterator itr;
        for (itr = ans.begin(); itr != ans.end(); itr++) {
            dd.push_back(*itr);
        
    }
        
        
        
        
        return dd;
        
    }
};
