class Solution {
public:
  int jump(vector<int> &nums) {
    int res = 0, l = 0, r = 0;
    while (r < nums.size() - 1) {
      int x = 0;
      for (int i = l; i <= r; i++) {
        x = max(x, i + nums[i]);
      }
      l = r + 1;
      r = x;
      res += 1;
    }
    return res;
  }
};
