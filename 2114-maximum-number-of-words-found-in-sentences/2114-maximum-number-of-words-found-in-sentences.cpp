class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int i = 0;
        int max_count = 0;

        while( i < sentences.size()){
            int j = 0;
            int count = 0;
            while(j < sentences[i].size()){
                if(sentences[i][j]== ' '){
                    count ++;
                }
                j++;
            }
            max_count = max(count+1, max_count);
            i++;

        }
        return max_count;
    }
};