/*
https://www.geeksforgeeks.org/problems/count-leaves-in-binary-tree/1
*/

class Solution {
 public:
  int countLeaves(Node* root) {
    // base case
    if (root == NULL) return 0;
    if (root->left == NULL && root->right == NULL) return 1;

    // recursive case
    int ansFromLeft = countLeaves(root->left);
    int ansFromRight = countLeaves(root->right);

    return ansFromLeft + ansFromRight;
  }
};
