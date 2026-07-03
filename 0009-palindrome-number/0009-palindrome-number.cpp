class Solution {
public:
    bool isPalindrome(int x) {
        int reverse=0;
        if(x<0){
            return false;
        }
        int num=x;
        while(num!=0){
        int lastdigit = num%10;
        if (reverse> INT_MAX / 10 || (reverse== INT_MAX / 10 && lastdigit > 7)) {
                return 0; 
            }
            if (reverse< INT_MIN / 10 || (reverse== INT_MIN / 10 && lastdigit < -8)) {
                return 0; 
           }
        reverse = reverse*10 + lastdigit;
        num=num/10;
        }
        return (reverse==x);
    }
};