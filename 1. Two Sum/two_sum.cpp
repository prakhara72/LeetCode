class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        map<int,int> mp;
        for (int i = 0; i<n; i++) mp[nums[i]] = -1;
        for (int i = 0; i<n; i++){
            if (mp[nums[i]] != -1) ans={mp[nums[i]],i};
            mp[target-nums[i]] = i;
        }
        return ans;
    }
};
