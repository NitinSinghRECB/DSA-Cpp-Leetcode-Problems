class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int f = 0;
        for(auto &i : patterns){
            if(word.find(i) != string::npos) f++;
        }
        return f;
    }
};