class Solution {
public:
    
    
    void f(int ind,vector<int>&arr,vector<int>&temp,vector<vector<int>>&ans,int target)
    {
        if(ind==arr.size())
        {
            if(target==0)
            {
                ans.push_back(temp);
            }
            return;
        }
        if(arr[ind]<=target)
        {
            temp.push_back(arr[ind]);
            f(ind,arr,temp,ans,target-arr[ind]);
            temp.pop_back();
        }
        f(ind+1,arr,temp,ans,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int ind=0;
        vector<int>temp;
        vector<vector<int>>ans;
        f(ind,candidates,temp,ans,target);
        return ans;
    }
};
