class Solution {
public:
    string reverseVowels(string s) {
        vector<char> ss;
        string ans = s;
        for(int i =0;i<s.size() ;i++ ){
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] =='I' || s[i] == 'O' || s[i] == 'U'){
                ss.push_back(s[i]);
            }
        }
        for(int i = 0;i<s.size() ;i++){
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] =='I' || s[i] == 'O' || s[i] == 'U'){
                ans[i] = ss[ss.size()-1];
                ss.pop_back();
            }
        }
        return ans;
    }
};