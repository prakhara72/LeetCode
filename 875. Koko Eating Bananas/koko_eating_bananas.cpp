class Solution {
private:
    bool canEat(vector<int> &piles, int h, int mid){
        int count = 0;
        int n = piles.size();
        for(int i = 0; i < n; i++){
            count += (piles[i]+mid-1)/mid;
        }
        return count<=h;
    }
    
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int lo = 1;
        int hi = *max_element(piles.begin(),piles.end());
        int mid;
        
        while(lo < hi){
            mid = lo + (hi-lo)/2;
            if(canEat(piles,h,mid)) hi = mid;
            else lo = mid+1;
        }
        return lo;
    }
};
