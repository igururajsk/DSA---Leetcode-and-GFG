class Solution {
public:
    int minAddToMakeValid(string s) {
        int open_needed= 0 ;
        int close_needed= 0 ;
        for( int i = 0 ; i < s.size() ; i++){
            if(s[i]=='('){
                open_needed += 1 ;
            }else if( s[i] == ')'){
                if(open_needed>0){
                    open_needed -= 1;
                }else{
                    close_needed += 1 ;
                }
            }
        }
        return open_needed + close_needed ;
    }
};