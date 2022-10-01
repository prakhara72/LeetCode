class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>> mp;
        vector<string> ans;
        
        int n = names.size();
        for(int i = 0; i < n; i++){
            mp.push_back({heights[i],names[i]});
        }
        
        // Sorting in Descending Order
        sort(mp.rbegin(),mp.rend());
        for(auto p:mp){
            ans.push_back(p.second);
        }
        return ans;
    }
};
