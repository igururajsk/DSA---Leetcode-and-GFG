class Solution {
public:
    bool isPalindrome(string s) {
        string answer ;
        for( int i = 0 ; i < s.size() ;i++ ){
            if(isalnum(s[i])){
                    answer.push_back(tolower(s[i]));
                }
            
        }
        int n = answer.size();

        for( int i = 0 ; i < n/2 ; i++ ){
            if(answer[i]!=answer[n-i-1]){
                return false ;
            }
        }
        return  true;

    }
};