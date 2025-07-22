/*
https://www.geeksforgeeks.org/problems/largest-number-possible5028/1
*/

class Solution {
 public:
  string findLargest(int n, int s) {
    string ans(n, '0');
    int i = 0;

    if (s > n * 9) return "-1";
    if (n > 1 && s == 0) return "-1";

    while (s > 0) {
      if (s > 9) s -= 9, ans[i] = '9';
      else ans[i] = s + '0', s -= s;

      i++;
    }

    return ans;
  }
};
