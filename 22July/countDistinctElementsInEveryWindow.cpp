/*
https://www.geeksforgeeks.org/problems/count-distinct-elements-in-every-window/1
*/

class Solution {
 public:
  vector<int> countDistinct(vector<int> &arr, int k) {
    unordered_map<int, int> mp;

    int l = 0, r = 0, n = arr.size();
    vector<int> ans;

    while (r < n) {
      mp[arr[r]]++;

      if (r - l + 1 == k) {
        ans.push_back(mp.size());

        mp[arr[l]]--;
        if (mp[arr[l]] == 0) mp.erase(arr[l]);
        l++;
      }

      r++;
    }

    return ans;
  }
};
