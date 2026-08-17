class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int comp = n / 2;
        unordered_map<int, int> mp;
        for (int num : nums) {
            mp[num]++;
            if (mp[num] > comp) {
                return num;
            }
        }
        return 0;
    }
};