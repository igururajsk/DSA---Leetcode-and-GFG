class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        vector<int> nums;
        
        unordered_map<int,int> m;
        for( int i = 0 ;i<a.size() ;i++ ){
            m[a[i]]++;
        }
        
        for ( int i = 0;i<b.size() ;i++){
            m[b[i]]++;
        }
        
        for(auto& pair :m){
            nums.push_back(pair.first);
        }
        
        sort(nums.begin(),nums.end());
        
        return nums;
        
        
    }
};