class Solution {
public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        vector<vector<double>> f;

        for (int i = 0; i < val.size(); i++) {
            f.push_back({(double)val[i] / wt[i], (double)val[i], (double)wt[i]});
        }

        sort(f.begin(), f.end(), [](auto &a, auto &b) {
            return a[0] > b[0];
        });

        double ans = 0.0;

        for (int i = 0; i < f.size(); i++) {
            double ratio = f[i][0];
            double value = f[i][1];
            double weight = f[i][2];

            if (capacity >= weight) {
                ans += value;
                capacity -= weight;
            } else {
                ans += ratio * capacity;
                break;
            }
        }

        return ans;
    }
};