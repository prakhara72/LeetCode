//Same as LIS (Binary Search) Problem ---
#include<bits/stdc++.h>
class Solution {
public:
    
    //basically when the widths will get equal so if at that time we compare height then it will consider that case too in ans but we want to skip it so we wrote a comparator fn in which when widths are equal then pair with more height will be at first then smaller height ones which will automatically skip the same width case;
    static bool comp(vector<int>& a, vector<int>& b){
        if(a[0]!=b[0])return a[0]<b[0];
        return a[1]>b[1];
    }
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        int n=envelopes.size();
        vector<int> ans;
        sort(envelopes.begin(),envelopes.end(),comp);
        for(int i=0;i<n;i++){
            cout<<envelopes[i][0]<<envelopes[i][1];
        }
        ans.push_back(envelopes[0][1]);
        for(int i=0;i<n;i++){
            if(envelopes[i][1]>ans.back()){
                ans.push_back(envelopes[i][1]);
            }
            else{
                int ind=lower_bound(ans.begin(),ans.end(),envelopes[i][1])-ans.begin();
                ans[ind]=envelopes[i][1];
            }
        }
        
        return ans.size();
    }
};
