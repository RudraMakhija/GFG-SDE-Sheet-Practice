/*
https://www.geeksforgeeks.org/problems/minimize-the-sum-of-product1525/1
*/

class Solution {
 public:
  long long minValue(vector<int> &arr1, vector<int> &arr2) {
    sort(arr1.begin(), arr1.end());
    sort(arr2.rbegin(), arr2.rend());

    int n = arr1.size();
    long long ans = 0;

    for (int i = 0; i < n; i++) ans += arr1[i] * arr2[i];

    return ans;
  }
};
