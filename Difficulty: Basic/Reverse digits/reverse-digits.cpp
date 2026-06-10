class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        string nums = to_string(n);
        reverse(nums.begin(),nums.end());
        
        int ans = stoi(nums);
        return ans;
        
    }
};