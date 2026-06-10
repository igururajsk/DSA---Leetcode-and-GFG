class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> n;
        for( int i =0;i<nums.size();i++ ){
            mp[nums[i]]++;
        }
        for(auto& pair : mp){
            n.push_back(pair.first);
        }
        sort(n.begin(),n.end());

        for(int i =0 ;i<n.size();i++){
            nums[i] = n[i];
        }
        return n.size();

                
    }
};

