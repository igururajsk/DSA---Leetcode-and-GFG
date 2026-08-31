class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
        int i = 0;
        int j = 0;
        
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        
        int platform = 0;
        int min_plat = 0;
        while(i<arr.size() && j<dep.size()){
            if(arr[i]<=dep[j]){
                platform ++;
                i++;
                min_plat = max(min_plat,platform);
            }else{
                platform --;
                j++;
            }
        }
        
        return min_plat;
    }
};
