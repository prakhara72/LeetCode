#include<string>
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZero = 0;

        // shift all non zero element to the left         
        for(int j=0; j<nums.size(); j++){
            if(nums[j]!=0){
                swap(nums[j], nums[nonZero]);
                nonZero++;
            }
        }
        
    }
};