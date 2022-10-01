class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {
        int n=nums.size();
        vector<int> nearest(32);
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<32;j++){
                if(nums[i]&(1<<j)){
                    nearest[j]=i;
                }
            }
            //this nearest array will compute different value for every index, basically it just computes that from that index which is the nearest element which make that bit position(32 positions) set;
            
            int lastsetbit=i; //assume that the index which sets max number of bit position is i itself, then further we can update;
            
            for(int j=0;j<32;j++){
                lastsetbit=max(lastsetbit,nearest[j]);//if n-2 pos pe nums ne sirf 0th pos and 2nd pos ko set kiya hai and 1st pos pe jo set bit hai it's bcoz of nums[n-1] so now the max or we will get till n-1;
            }
            
            ans[i]=lastsetbit-i+1;//for n-1 ans[n-1]=1; for above case ans[n-2]=2;
        }
        
        return ans;
    }
};
