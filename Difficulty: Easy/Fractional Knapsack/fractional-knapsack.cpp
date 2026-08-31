class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        vector<vector<double>> knap;
        for(int i = 0 ;i< val.size() ;i++){
            knap.push_back({(double)val[i]/wt[i],(double)val[i],(double)wt[i]});
        }
        sort(knap.begin(),knap.end(),[](const vector<double>& a,const vector<double>& b){
            return a[0]>b[0];
        });
        int cap = capacity;
        double ans = 0;
        for( int i = 0 ; i< knap.size() ;i++ ){
            if(knap[i][2]<cap ){
                ans += knap[i][1];
                cap -= knap[i][2];
            }else{
                ans += (cap/knap[i][2])*knap[i][1];
                break;
            }
        }
        return double(ans);
    }
};