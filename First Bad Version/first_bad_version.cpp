class Solution {
public:
    int firstBadVersion(int n) {
        long start = 0;
        long end = n;
        while (start <= end)
        {
            long middle = (start + end)/2;
            
            bool isMiddleBad = isBadVersion(middle);
            // Check If It's bad and before it is bad
            if(isMiddleBad && !isBadVersion(middle-1))
            {
                return middle;
            }
            if (isMiddleBad)
            {
                end = middle - 1;
            }
            else{
                start = middle + 1;
            }
        }
        return -1;
    }
};