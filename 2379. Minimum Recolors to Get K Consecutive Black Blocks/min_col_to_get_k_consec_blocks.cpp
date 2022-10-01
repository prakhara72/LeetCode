class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int ans = k;
        int n = blocks.size();
        vector<int> pre(n+1,0);
        for(int i = 1; i <= n; i++){
            pre[i] = pre[i-1] + (blocks[i-1]=='W');
        }
        for(int i = k; i <= n; i++){
            int temp = pre[i] - pre[i-k];
            ans = min(ans,temp);
        }
        return ans;
    }
};
