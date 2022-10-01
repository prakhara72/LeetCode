//Question - https://leetcode.com/problems/3sum-closest/

class Solution {
    public int threeSumClosest(int[] nums, int target) {
        Arrays.sort(nums);
        int diff = Integer.MAX_VALUE;
        int n = nums.length;
        for(int i=0;i<n;i++){
            int l = i+1;
            int r = n-1;
            
            while(l<r){
                int sum = nums[i] + nums[l]+ nums[r];
                
                if(Math.abs(target-sum)<Math.abs(diff)){
                    diff = target-sum;
                }
                if(sum<target){
                    l++;
                }else{
                    r--;
                }
                
            }
        }
         return (target-diff);
        
    }
}