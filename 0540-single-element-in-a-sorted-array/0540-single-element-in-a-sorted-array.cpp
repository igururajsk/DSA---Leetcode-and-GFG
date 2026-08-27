class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans = 0;
        for( int i = 0 ; i<nums.size() ; i++){
            mp[nums[i]]++;
        }
        for(auto& pair : mp){
            if(pair.second == 1){
                ans = pair.first ;
            }
        }
        return ans;
    }
};