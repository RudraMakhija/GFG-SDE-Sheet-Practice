/*
https://www.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1
*/

class Solution {
 public:
  vector<int> subarraySum(vector<int> &arr, int target) {
    int l = 0, r = 0, n = arr.size(), wsum = 0;

    while (r < n) {
      wsum += arr[r];

      while (l < r && wsum > target) {
        wsum -= arr[l];
        l++;
      }

      if (wsum == target) return {l + 1, r + 1};

      r++;
    }

    return {-1};
  }
};
