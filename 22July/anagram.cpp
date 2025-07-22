/*
https://www.geeksforgeeks.org/problems/anagram-1587115620/1
*/

class Solution {
 public:
  bool areAnagrams(string& s1, string& s2) {
    vector<int> freq(26, 0);

    for (char& ch : s1) freq[ch - 'a']++;
    for (char& ch : s2) freq[ch - 'a']--;

    for (int& i : freq) if (i != 0) return false;

    return true;
  }
};
