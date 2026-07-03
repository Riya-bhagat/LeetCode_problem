class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq[26]={0};
        if(s.length() !=t.length()){
            return false;
        }
        for(int i =0;i<s.length();i++){
            int inx=s[i]-'a';
            freq[inx]++;
        }
        for(int i=0;i<t.length();i++){
            int inx=t[i]-'a';
            if(freq[inx]==0){
                return false;
            }
            freq[inx]--;
        }
        return true;
    }
};