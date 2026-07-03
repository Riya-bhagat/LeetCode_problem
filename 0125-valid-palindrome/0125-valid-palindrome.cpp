class Solution {
public:
    bool isPalindrome(string s) {
     string clean;
     for(char ch : s){
        if(isalnum(ch)){
            clean+=tolower(ch);
        }
     }
     int start = 0;
     int end = clean.length()-1;
     while(start<end){
        if(clean[start]!=clean[end]){
            return false;
            
        }
        start++;
        end--;
     }   
     return true;
    }
};