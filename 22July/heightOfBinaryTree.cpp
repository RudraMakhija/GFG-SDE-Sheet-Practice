/*
https://www.geeksforgeeks.org/problems/height-of-binary-tree/1
*/

class Solution {
 public:
  int dfs(Node* root) {
    // base case
    if (root == NULL) return 0;

    // recursive case
    int ansFromLeft = dfs(root->left);
    int ansFromRight = dfs(root->right);

    return 1 + max(ansFromLeft, ansFromRight);
  }
  int height(Node* node) {
    int numOfNodesAlongLongestPath = dfs(node);

    int numOfEdgesAlongLongestPath = numOfNodesAlongLongestPath - 1;

    return numOfEdgesAlongLongestPath;
  }
};
