class Solution {
 public:
  static bool customCmp(int num1, int num2) {
    string a = to_string(num1);
    string b = to_string(num2);

    // returning true means order is correct
    // returning false means order is incorrect

    if (a + b > b + a) return true;
    else return false;
  }
  string findLargest(vector<int> &arr) {
    sort(arr.begin(), arr.end(), customCmp);

    if (arr[0] == 0) return "0";

    string ans = "";
    for (int i : arr) ans += to_string(i);

    return ans;
  }
};
