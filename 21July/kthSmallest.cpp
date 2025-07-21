/*
https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1
*/

class Solution {
 public:
  int kthSmallest(vector<int>& arr, int k) {
    priority_queue<int> pq;

    for (int& i : arr) {
      pq.push(i);
      if (pq.size() > k) pq.pop();
    }

    return pq.top();
  }
};
