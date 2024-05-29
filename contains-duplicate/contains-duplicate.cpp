class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto &num:nums){
            mp[num]++;
        }
        for(auto &[x,f]:mp){
            if(f>1){
                return true;
                break;
            }
        }
        return false;
        
    }
};