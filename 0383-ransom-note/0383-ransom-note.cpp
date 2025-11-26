class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> rn ;
        unordered_map<char,int> mz ;
        for( int i =0 ; i< ransomNote.size() ;i++){
            rn[ransomNote[i]]++;
        }
        for ( int i = 0 ; i< magazine.size() ;i++){
            mz[magazine[i]]++ ;
        }
        for ( auto& pair : rn ){
            if(mz[pair.first] == 0 ){
                return false;
            }
            if(pair.second > mz[pair.first]){
                return false;
            }
        }
        return true;
    }
};