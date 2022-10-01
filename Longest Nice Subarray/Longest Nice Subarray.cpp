class Solution {
public:
    //basically if A&B==0 then if we do A+B=X and check C&X toh vo dono se check ho jayega - A=100 B=001 the X=101 so now we cam check;
    int longestNiceSubarray(vector<int>& nums) {
        int n=nums.size();
        int ans=1;
        int l=0,h;
        int c=nums[0];
        for(int i=1;i<n;i++){
            while((nums[i]&c)!=0){
                c-=nums[l];
                l++;
            }
                h=i;
                c+=nums[i];
            ans=max(ans,h-l+1);
        }
        return ans;
    }
};
