class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> answer;
        int zero;
        int twice;
        for( int i =0 ;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for( int i =1 ;i<nums.size() + 1 ;i++){
            if(mp[i] == 0){
                zero = i;
            }
            if(mp[i]== 2){
                twice = i;
            }
            continue;
        }

        answer.push_back(twice);
        answer.push_back(zero);
        
        return answer;
    
    }
};