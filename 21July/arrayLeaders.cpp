/*
https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1
*/

class Solution {
 public:
  vector<int> leaders(vector<int>& arr) {
    int maxi = INT_MIN, n = arr.size();

    vector<int> ans;

    for (int i = n - 1; i >= 0; i--) {
      if (arr[i] >= maxi) maxi = arr[i], ans.push_back(arr[i]);
    }

    reverse(ans.begin(), ans.end());

    return ans;
  }
};
