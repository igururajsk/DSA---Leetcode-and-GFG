class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        for(int i = 0;i< nums.size();i++){
            if(nums[i]!=target ){
                continue;
            }else if(nums[i]== target ){
                result.push_back(i);
            }
        }
        if( result.empty() ){
            return {-1,-1};
        }
        vector<int> ans;
        int n = result.size();
        ans.push_back(result[0]);
        ans.push_back(result[n-1]);
        return ans;
    }
};