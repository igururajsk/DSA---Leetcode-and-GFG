class Solution {
  public:
    vector<int> maxMeetings(vector<int>& s, vector<int>& f) {
        vector<vector<int>> meetings;

        for (int i = 0; i < s.size(); i++)
            meetings.push_back({f[i], s[i], i + 1});

        sort(meetings.begin(), meetings.end(), [](auto &a, auto &b) {
            return a[0] < b[0];
        });

        vector<int> ans;

        int lastFinish = -1;

        for (auto &m : meetings) {
            if (m[1] > lastFinish) {
                ans.push_back(m[2]);
                lastFinish = m[0];
            }
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};