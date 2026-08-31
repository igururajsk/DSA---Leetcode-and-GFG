class Solution {
  public:
    vector<int> maxMeetings(vector<int>& s, vector<int>& f) {
        vector<vector<int>> meetings;
        vector<int> result;
        for(int i =0 ; i< s.size();i++){
            meetings.push_back({s[i],f[i],i+1});
        }
        sort(meetings.begin(), meetings.end(), [](vector<int>& a, vector<int>& b) {
            return a[1] < b[1];
        });
        result.push_back(meetings[0][2]);
        int last_end = meetings[0][1];
        
        for(int i =1 ;  i< meetings.size();i++){
            if(last_end < meetings[i][0]){
                result.push_back(meetings[i][2]);
                last_end = meetings[i][1];
            }
        }
        sort(result.begin(),result.end());
        
        return result;
        
        
        
        
    }
};